#ifndef _CONTAINERS_H_
#define _CONTAINERS_H_

#include <map>
#include "../include/GeometryTypes.h"

namespace Sweepline
{
    namespace Containers
    {
        class SortedLinesMap
        {
        private:
            std::map<float, const GeometryTypes::Segment*> container;

        public:
            void Add(const GeometryTypes::Segment*);
        };
    }
}

#endif
