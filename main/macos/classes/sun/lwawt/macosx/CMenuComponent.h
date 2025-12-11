#ifndef _sun_lwawt_macosx_CMenuComponent_h_
#define _sun_lwawt_macosx_CMenuComponent_h_
//$ class sun.lwawt.macosx.CMenuComponent
//$ extends sun.lwawt.macosx.CFRetainedResource
//$ implements java.awt.peer.MenuComponentPeer

#include <java/awt/peer/MenuComponentPeer.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>

namespace java {
	namespace awt {
		class Font;
		class MenuComponent;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CMenuComponent : public ::sun::lwawt::macosx::CFRetainedResource, public ::java::awt::peer::MenuComponentPeer {
	$class(CMenuComponent, $NO_CLASS_INIT, ::sun::lwawt::macosx::CFRetainedResource, ::java::awt::peer::MenuComponentPeer)
public:
	CMenuComponent();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::MenuComponent* target);
	virtual int64_t createModel() {return 0;}
	virtual void dispose() override;
	::java::awt::MenuComponent* getTarget();
	virtual void setFont(::java::awt::Font* f) override;
	virtual $String* toString() override;
	::java::awt::MenuComponent* target = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CMenuComponent_h_