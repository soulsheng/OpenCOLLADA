/*
    Copyright (c) 2008 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_SUBDMODIFIER_H__
#define __MayaDM_SUBDMODIFIER_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMSubdBase.h"
namespace MayaDM
{
class SubdModifier : public SubdBase
{
public:
public:
	SubdModifier(FILE* file,const std::string& name,const std::string& parent=""):SubdBase(file, name, parent, "subdModifier"){}
	virtual ~SubdModifier(){}
	void setInputComponents(const componentList& ics)
	{
		fprintf(mFile,"setAttr \".ics\" -type \"componentList\" ");
		ics.write(mFile);
		fprintf(mFile,";\n");

	}
	void getInSubdiv()
	{
		fprintf(mFile,"\"%s.is\"",mName.c_str());

	}
	void getCachedSubdiv()
	{
		fprintf(mFile,"\"%s.ic\"",mName.c_str());

	}
	void getInputComponents()
	{
		fprintf(mFile,"\"%s.ics\"",mName.c_str());

	}
protected:
	SubdModifier(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType):SubdBase(file, name, parent, nodeType) {}

};
}//namespace MayaDM
#endif//__MayaDM_SUBDMODIFIER_H__