/*!
 * @brief
 *
 * @file
 *
 * @ingroup     rrt_2d
 */

/*------------------------------------------        Include Files           ------------------------------------------*/
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include "boost/graph/adjacency_list.hpp"

/*------------------------------------------            Definitions         ------------------------------------------*/
#ifndef RRT_2D_GRAPH_DEF_H
#define RRT_2D_GRAPH_DEF_H
namespace rrt {

    struct Point2D {
        double x, y;
        Point2D() : x(0), y(0) {}
        Point2D(double _x, double _y) : x(_x), y(_y) {}
        double eu_dist(const Point2D& p2) const{
            return std::sqrt(std::pow(p2.x - x, 2) + std::pow(p2.y - y, 2));}
    };

    inline std::ostream &operator<<(std::ostream &o_str, const Point2D &p) {
        o_str << "x: " << p.x << ", y: " << p.y << " ";
        return o_str;
    }

    inline std::istream &operator>>(std::istream &i_str, Point2D &p) {
        char temp;
        i_str >> temp >>  p.x >> temp >> p.y >> temp;
        return i_str;
    }

    struct Workspace {
        Point2D p1, p2, goal;
        double bias;
        std::mt19937 gen;
        std::uniform_real_distribution<> dist_b;
        std::uniform_real_distribution<> dist_x;
        std::uniform_real_distribution<> dist_y;

        Workspace(const Point2D& _p1, const Point2D& _p2, const Point2D& _g, double _b, const int _s){
            p1 = _p1;
            p2 = _p2;
            goal = _g;
            bias = _b;
            if(_s == -1) gen = std::mt19937(std::random_device()());
            else gen = std::mt19937(_s);
            dist_b = std::uniform_real_distribution<>(0, 1);
            dist_x = std::uniform_real_distribution<>(p1.x, p2.x);
            dist_y = std::uniform_real_distribution<>(p1.y, p2.y);
        }

        void seed(int _s){
            if(_s == -1) gen = std::mt19937(std::random_device()());
            else gen = std::mt19937(_s);
        }

        Point2D sample(){
            if (dist_b(gen) < bias) return goal; return Point2D(dist_x(gen), dist_y(gen));}
    };

    inline std::ostream &operator<<(std::ostream &o_str, const Workspace &w) {
        o_str << "lim point 1: " << w.p1 << ", lim point 2: " << w.p2 << " ";
        return o_str;
    }

    struct Node {
        int node_id = -1;
        Point2D node;
        int p_node_id = -1;
        double g_cost = -1;
    };


    inline std::ostream &operator<<(std::ostream &o_str, const Node &n) {
        o_str << "node_id: " << n.node_id << ", " << n.node <<
              ", p_node_id: " << n.p_node_id << ", g_cost: " << n.g_cost << " ";
        return o_str;
    }

    struct Edge {
        int source = -1, target = -1;
        double cost = -1;
    };

    inline std::ostream &operator<<(std::ostream &o_str, const Edge &e) {
        o_str << "source: " << e.source << ", target: " << e.target << ", cost: " << e.cost << " ";
        return o_str;
    }

    typedef boost::adjacency_list<boost::vecS, boost::vecS, boost::bidirectionalS, Node, Edge> Graph;

    struct CircleObstacle {
        Point2D center;
        double r;
        CircleObstacle() : r(0){};
        CircleObstacle(double _x, double _y, double _r) : center({_x, _y}), r(_r){}
    };

    inline std::ostream &operator<<(std::ostream &o_str, const CircleObstacle &c) {
        o_str << c.center << ", r: " << c.r << " ";
        return o_str;
    }

    inline std::istream &operator>>(std::istream &i_str, CircleObstacle &c) {
        char temp;
        i_str >> temp >>  c.center.x >> temp >> c.center.y >> temp >> c.r >> temp;
        return i_str;
    }

    typedef CircleObstacle GoalZone;

    typedef std::vector<CircleObstacle> ObstacleVec;

    inline std::ostream &operator<<(std::ostream &o_str, const ObstacleVec &v) {
        for(auto& x: v) o_str << x << std::endl;
        return o_str;
    }
}

#endif //RRT_2D_GRAPH_DEF_H
