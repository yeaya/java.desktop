#ifndef _javax_swing_plaf_metal_MetalLookAndFeel$AATextListener$1_h_
#define _javax_swing_plaf_metal_MetalLookAndFeel$AATextListener$1_h_
//$ class javax.swing.plaf.metal.MetalLookAndFeel$AATextListener$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalLookAndFeel$AATextListener;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalLookAndFeel$AATextListener$1 : public ::java::lang::Runnable {
	$class(MetalLookAndFeel$AATextListener$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	MetalLookAndFeel$AATextListener$1();
	void init$(::javax::swing::plaf::metal::MetalLookAndFeel$AATextListener* this$0);
	virtual void run() override;
	::javax::swing::plaf::metal::MetalLookAndFeel$AATextListener* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalLookAndFeel$AATextListener$1_h_