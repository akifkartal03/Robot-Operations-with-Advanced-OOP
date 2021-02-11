#ifndef HIBRIT_H
#define HIBRIT_H
#include "robot.h"
#include "manipulator_robots.h"
namespace eagle{
    class Hibrit:public Robot,ManipulatorRobots{
        public:
            Hibrit();
            double getFocusTime() const;
            double getChangeTime() const;
            void setChangeTime(double changeTime);
            void setFocusTime(double focusTime);
        protected:
            double focusTime;
            bool changeTime;
    };

}

#endif