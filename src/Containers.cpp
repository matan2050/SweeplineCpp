#include "../include/Containers.h"
#include "../include/GeometryTypes.h"

void Sweepline::Containers::SortedLinesMap::Add(const GeometryTypes::Segment* t_seg)
{
    container.insert(
        std::pair<float, const GeometryTypes::Segment*>
        (t_seg->GetStart().GetX(), t_seg)
    );
}
