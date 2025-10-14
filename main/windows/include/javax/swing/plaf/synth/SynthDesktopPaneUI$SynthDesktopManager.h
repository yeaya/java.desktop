#ifndef _javax_swing_plaf_synth_SynthDesktopPaneUI$SynthDesktopManager_h_
#define _javax_swing_plaf_synth_SynthDesktopPaneUI$SynthDesktopManager_h_
//$ class javax.swing.plaf.synth.SynthDesktopPaneUI$SynthDesktopManager
//$ extends javax.swing.DefaultDesktopManager
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		class JComponent;
		class JInternalFrame;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthDesktopPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthDesktopPaneUI$SynthDesktopManager : public ::javax::swing::DefaultDesktopManager, public ::javax::swing::plaf::UIResource {
	$class(SynthDesktopPaneUI$SynthDesktopManager, $NO_CLASS_INIT, ::javax::swing::DefaultDesktopManager, ::javax::swing::plaf::UIResource)
public:
	SynthDesktopPaneUI$SynthDesktopManager();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::synth::SynthDesktopPaneUI* this$0);
	virtual void deiconifyFrame(::javax::swing::JInternalFrame* f) override;
	virtual void iconifyFrame(::javax::swing::JInternalFrame* f) override;
	virtual void maximizeFrame(::javax::swing::JInternalFrame* f) override;
	virtual void removeIconFor(::javax::swing::JInternalFrame* f) override;
	virtual void setBoundsForFrame(::javax::swing::JComponent* f, int32_t newX, int32_t newY, int32_t newWidth, int32_t newHeight) override;
	virtual $String* toString() override;
	::javax::swing::plaf::synth::SynthDesktopPaneUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthDesktopPaneUI$SynthDesktopManager_h_