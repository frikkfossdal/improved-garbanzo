//
//  Director.hpp
//  phd_sketch2
//
//  Created by Frikk Fossdal on 21.03.2018.
//

#ifndef Director_hpp
#define Director_hpp
#include "ofMain.h"
#include "Node.hpp"

#include <stdio.h>
class Director{
public:
    //Var
    std::vector<Node> nodes;
    std::vector<ofxPanel> nodePanels;
    
    //Meth
    Director();
    void initSystem(int numberOfNodes);
    void showSystem();
    void updateSystem();
    void assignTargets();
    
private:
};

#endif /* Director_hpp */

