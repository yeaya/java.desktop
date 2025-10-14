#ifndef _sun_awt_LightweightPeerHolder_h_
#define _sun_awt_LightweightPeerHolder_h_
//$ class sun.awt.LightweightPeerHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace peer {
			class LightweightPeer;
		}
	}
}

namespace sun {
	namespace awt {

class LightweightPeerHolder : public ::java::lang::Object {
	$class(LightweightPeerHolder, 0, ::java::lang::Object)
public:
	LightweightPeerHolder();
	void init$();
	static ::java::awt::peer::LightweightPeer* lightweightMarker;
};

	} // awt
} // sun

#endif // _sun_awt_LightweightPeerHolder_h_