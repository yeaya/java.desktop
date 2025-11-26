#ifndef _sun_awt_X11_XDropTargetProtocol$EmbedderRegistryEntry_h_
#define _sun_awt_X11_XDropTargetProtocol$EmbedderRegistryEntry_h_
//$ class sun.awt.X11.XDropTargetProtocol$EmbedderRegistryEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {

class XDropTargetProtocol$EmbedderRegistryEntry : public ::java::lang::Object {
	$class(XDropTargetProtocol$EmbedderRegistryEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XDropTargetProtocol$EmbedderRegistryEntry();
	void init$(bool overriden, int32_t version, int64_t proxy);
	int64_t getProxy();
	int32_t getVersion();
	bool isOverriden();
	bool overriden = false;
	int32_t version = 0;
	int64_t proxy = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XDropTargetProtocol$EmbedderRegistryEntry_h_