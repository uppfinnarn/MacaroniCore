//
//  MCTextAsset.cpp
//  MacaroniCore
//
//  Created by Johannes Ekberg on 2013-01-15.
//  Copyright (c) 2013 MacaroniCode. All rights reserved.
//

#include "MCTextAsset.h"
#include "MCLogger.h"
#include <fstream>

std::string MCTextAsset::text()
{
	if(!this->isLoaded())
		this->load();
	return m_data;
}

void MCTextAsset::load()
{
	std::ifstream in(m_source.c_str(), std::ios::in | std::ios::binary);
	if(in)
	{
		in.seekg(0, std::ios::end);
		m_data.resize(in.tellg());
		in.seekg(0, std::ios::beg);
		in.read(&m_data[0], m_data.size());
		in.close();
		m_loaded = true;
	}
	else
	{
		mclError() << "Can't load Text Asset from: " << m_source;
		m_loaded = false;
	}
}

void MCTextAsset::unload()
{
	m_data.clear();
	m_loaded = false;
}
