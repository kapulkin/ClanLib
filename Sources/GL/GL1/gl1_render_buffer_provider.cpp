/*
**  ClanLib SDK
**  Copyright (c) 1997-2012 The ClanLib Team
**
**  This software is provided 'as-is', without any express or implied
**  warranty.  In no event will the authors be held liable for any damages
**  arising from the use of this software.
**
**  Permission is granted to anyone to use this software for any purpose,
**  including commercial applications, and to alter it and redistribute it
**  freely, subject to the following restrictions:
**
**  1. The origin of this software must not be misrepresented; you must not
**     claim that you wrote the original software. If you use this software
**     in a product, an acknowledgment in the product documentation would be
**     appreciated but is not required.
**  2. Altered source versions must be plainly marked as such, and must not be
**     misrepresented as being the original software.
**  3. This notice may not be removed or altered from any source distribution.
**
**  Note: Some of the libraries ClanLib may link to may have additional
**  requirements or restrictions.
**
**  File Author(s):
**
**    Magnus Norddahl
**    Harry Storbacka
*/

#include "LegacyGL/precomp.h"
#include "API/Display/TargetProviders/render_buffer_provider.h"
#include "opengl1_wrap.h"
#include "opengl1.h"
#include "gl1_render_buffer_provider.h"

namespace clan
{

GL1RenderBufferProvider::GL1RenderBufferProvider(GL1GraphicContextProvider *gc_provider)
: gc_provider(gc_provider)
{
	throw Exception("GL1RenderBuffer is not supported");
}

GL1RenderBufferProvider::~GL1RenderBufferProvider()
{
}

/////////////////////////////////////////////////////////////////////////////
// GL1RenderBufferProvider Attributes:

GLuint GL1RenderBufferProvider::get_handle()
{
	return 0;
}

/////////////////////////////////////////////////////////////////////////////
// GL1RenderBufferProvider Operations:

void GL1RenderBufferProvider::create(int width, int height, TextureFormat texture_format, int multisample_samples)
{
}

}