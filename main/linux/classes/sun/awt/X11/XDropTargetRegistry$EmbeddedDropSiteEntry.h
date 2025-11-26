#ifndef _sun_awt_X11_XDropTargetRegistry$EmbeddedDropSiteEntry_h_
#define _sun_awt_X11_XDropTargetRegistry$EmbeddedDropSiteEntry_h_
//$ class sun.awt.X11.XDropTargetRegistry$EmbeddedDropSiteEntry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class HashSet;
		class List;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XDropTargetRegistry$EmbeddedDropSiteEntry : public ::java::lang::Object {
	$class(XDropTargetRegistry$EmbeddedDropSiteEntry, 0, ::java::lang::Object)
public:
	XDropTargetRegistry$EmbeddedDropSiteEntry();
	void init$(int64_t root, int64_t event_mask, ::java::util::List* supportedProtocols);
	void addSite(int64_t window, bool isXEmbedClient);
	int64_t getEventMask();
	int64_t getRoot();
	int64_t getSite(int32_t x, int32_t y);
	$longs* getSites();
	::java::util::List* getSupportedProtocols();
	bool hasNonXEmbedClientSites();
	bool hasSites();
	void removeSite(int64_t window);
	void setSupportedProtocols(::java::util::List* list);
	static bool $assertionsDisabled;
	int64_t root = 0;
	int64_t event_mask = 0;
	::java::util::List* supportedProtocols = nullptr;
	::java::util::HashSet* nonXEmbedClientSites = nullptr;
	::java::util::List* sites = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XDropTargetRegistry$EmbeddedDropSiteEntry_h_