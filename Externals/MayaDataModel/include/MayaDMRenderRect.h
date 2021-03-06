/*
    Copyright (c) 2008-2009 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_RENDERRECT_H__
#define __MayaDM_RENDERRECT_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMGeometryShape.h"
namespace MayaDM
{
class RenderRect : public GeometryShape
{
public:

	RenderRect():GeometryShape(){}
	RenderRect(FILE* file,const std::string& name,const std::string& parent="",bool shared=false,bool create=true)
		:GeometryShape(file, name, parent, "renderRect", shared, create){}
	virtual ~RenderRect(){}

protected:
	RenderRect(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType,bool shared=false,bool create=true)
		:GeometryShape(file, name, parent, nodeType, shared, create) {}

};
}//namespace MayaDM
#endif//__MayaDM_RENDERRECT_H__
