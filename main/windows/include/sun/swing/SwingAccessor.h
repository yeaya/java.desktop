#ifndef _sun_swing_SwingAccessor_h_
#define _sun_swing_SwingAccessor_h_
//$ class sun.swing.SwingAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace swing {
		class SwingAccessor$JComponentAccessor;
		class SwingAccessor$JLightweightFrameAccessor;
		class SwingAccessor$JTextComponentAccessor;
		class SwingAccessor$KeyStrokeAccessor;
		class SwingAccessor$PopupFactoryAccessor;
		class SwingAccessor$RepaintManagerAccessor;
		class SwingAccessor$UIDefaultsAccessor;
	}
}

namespace sun {
	namespace swing {

class $import SwingAccessor : public ::java::lang::Object {
	$class(SwingAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SwingAccessor();
	void init$();
	static void ensureClassInitialized($Class* c);
	static ::sun::swing::SwingAccessor$JComponentAccessor* getJComponentAccessor();
	static ::sun::swing::SwingAccessor$JLightweightFrameAccessor* getJLightweightFrameAccessor();
	static ::sun::swing::SwingAccessor$JTextComponentAccessor* getJTextComponentAccessor();
	static ::sun::swing::SwingAccessor$KeyStrokeAccessor* getKeyStrokeAccessor();
	static ::sun::swing::SwingAccessor$PopupFactoryAccessor* getPopupFactoryAccessor();
	static ::sun::swing::SwingAccessor$RepaintManagerAccessor* getRepaintManagerAccessor();
	static ::sun::swing::SwingAccessor$UIDefaultsAccessor* getUIDefaultsAccessor();
	static void setJComponentAccessor(::sun::swing::SwingAccessor$JComponentAccessor* jCompAccessor);
	static void setJLightweightFrameAccessor(::sun::swing::SwingAccessor$JLightweightFrameAccessor* accessor);
	static void setJTextComponentAccessor(::sun::swing::SwingAccessor$JTextComponentAccessor* jtca);
	static void setKeyStrokeAccessor(::sun::swing::SwingAccessor$KeyStrokeAccessor* accessor);
	static void setPopupFactoryAccessor(::sun::swing::SwingAccessor$PopupFactoryAccessor* popupFactoryAccessor);
	static void setRepaintManagerAccessor(::sun::swing::SwingAccessor$RepaintManagerAccessor* accessor);
	static void setUIDefaultsAccessor(::sun::swing::SwingAccessor$UIDefaultsAccessor* accessor);
	static ::sun::swing::SwingAccessor$JComponentAccessor* jComponentAccessor;
	static ::sun::swing::SwingAccessor$JTextComponentAccessor* jtextComponentAccessor;
	static ::sun::swing::SwingAccessor$JLightweightFrameAccessor* jLightweightFrameAccessor;
	static ::sun::swing::SwingAccessor$UIDefaultsAccessor* uiDefaultsAccessor;
	static ::sun::swing::SwingAccessor$RepaintManagerAccessor* repaintManagerAccessor;
	static ::sun::swing::SwingAccessor$PopupFactoryAccessor* popupFactoryAccessor;
	static ::sun::swing::SwingAccessor$KeyStrokeAccessor* keyStrokeAccessor;
};

	} // swing
} // sun

#endif // _sun_swing_SwingAccessor_h_