#ifndef _sun_lwawt_macosx_CMenuItem_h_
#define _sun_lwawt_macosx_CMenuItem_h_
//$ class sun.lwawt.macosx.CMenuItem
//$ extends sun.lwawt.macosx.CMenuComponent
//$ implements java.awt.peer.MenuItemPeer

#include <java/awt/peer/MenuItemPeer.h>
#include <sun/lwawt/macosx/CMenuComponent.h>

namespace java {
	namespace awt {
		class Image;
		class MenuItem;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CImage;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CMenuItem : public ::sun::lwawt::macosx::CMenuComponent, public ::java::awt::peer::MenuItemPeer {
	$class(CMenuItem, $NO_CLASS_INIT, ::sun::lwawt::macosx::CMenuComponent, ::java::awt::peer::MenuItemPeer)
public:
	CMenuItem();
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::MenuItem* target);
	virtual int64_t createModel() override;
	virtual void handleAction(int64_t when, int32_t modifiers);
	virtual void initialize(::java::awt::MenuItem* target);
	bool isEnabled();
	bool isSeparator();
	int64_t lambda$createModel$0(int64_t ptr);
	void lambda$setEnabled$5(bool finalB, int64_t ptr);
	void lambda$setImage$2(int64_t ptr, int64_t imgPtr);
	void lambda$setImage$3(::sun::lwawt::macosx::CImage* cimg, int64_t ptr);
	void lambda$setLabel$1($String* finalLabel, char16_t finalKeyChar, int32_t finalKeyCode, int32_t finalKeyMask, int64_t ptr);
	void lambda$setToolTipText$4($String* text, int64_t ptr);
	int64_t nativeCreate(int64_t parentMenu, bool isSeparator);
	void nativeSetEnabled(int64_t modelPtr, bool b);
	void nativeSetImage(int64_t modelPtr, int64_t image);
	void nativeSetLabel(int64_t modelPtr, $String* label, char16_t keyChar, int32_t keyCode, int32_t modifiers);
	void nativeSetTooltip(int64_t modelPtr, $String* text);
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	void setImage(::java::awt::Image* img);
	virtual void setLabel($String* label, char16_t keyChar, int32_t keyCode, int32_t modifiers);
	virtual void setLabel($String* label) override;
	void setToolTipText($String* text);
	virtual $String* toString() override;
	::java::util::concurrent::atomic::AtomicBoolean* enabled = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CMenuItem_h_