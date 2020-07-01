//
// Copyright (C) 2020 Petr Talla. [petr.talla@gmail.com]
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//		      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//=============================================================================
#pragma once

#include "T2lEnPoint.h"
#include "T2lPoint2.h"

namespace T2l
{

//=============================================================================
class EnPointXy : public EnPoint{
//=============================================================================
public:
//<CONSTRUCTION>
    EnPointXy(const Point2F& xy);
//<METHODS>
    virtual Point2F xy(const Canvas* canvas) { return xy_; }
    virtual EnPoint* clone() { return new EnPointXy(xy_); }
//=============================================================================
protected:
//<DATA>
    Point2F xy_;
};

} // namespace T2l
