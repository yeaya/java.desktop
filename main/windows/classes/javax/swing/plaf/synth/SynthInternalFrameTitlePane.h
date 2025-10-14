#ifndef _javax_swing_plaf_synth_SynthInternalFrameTitlePane_h_
#define _javax_swing_plaf_synth_SynthInternalFrameTitlePane_h_
//$ class javax.swing.plaf.synth.SynthInternalFrameTitlePane
//$ extends javax.swing.plaf.basic.BasicInternalFrameTitlePane
//$ implements javax.swing.plaf.synth.SynthUI,java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/synth/SynthUI.h>

namespace java {
	namespace awt {
		class Graphics;
		class LayoutManager;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JComponent;
		class JInternalFrame;
		class JPopupMenu;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class Region;
				class SynthContext;
				class SynthStyle;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthInternalFrameTitlePane : public ::javax::swing::plaf::basic::BasicInternalFrameTitlePane, public ::javax::swing::plaf::synth::SynthUI, public ::java::beans::PropertyChangeListener {
	$class(SynthInternalFrameTitlePane, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicInternalFrameTitlePane, ::javax::swing::plaf::synth::SynthUI, ::java::beans::PropertyChangeListener)
public:
	SynthInternalFrameTitlePane();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::addSystemMenuItems;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::contains;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::enable;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getBounds;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getSize;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getLocation;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::add;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JInternalFrame* f);
	static ::javax::swing::JInternalFrame* access$000(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$100(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$1000(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$1100(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$1200(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$1300(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$1400(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$1500(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$1600(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$1700(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$1800(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$1900(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$200(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$2000(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$300(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$400(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$500(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$600(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$700(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$800(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$900(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* x0);
	virtual void addSubComponents() override;
	virtual void addSystemMenuItems(::javax::swing::JPopupMenu* menu);
	virtual void assembleSystemMenu() override;
	virtual ::java::awt::LayoutManager* createLayout() override;
	::javax::swing::JButton* createNoFocusButton();
	static int32_t getButtonMnemonic($String* button);
	int32_t getComponentState(::javax::swing::JComponent* c);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	::javax::swing::plaf::synth::Region* getRegion(::javax::swing::JComponent* c);
	virtual $String* getUIClassID() override;
	virtual void installDefaults() override;
	virtual void installListeners() override;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::paint;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::list;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::paintBorder;
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::requestFocus;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::repaint;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::remove;
	virtual void showSystemMenu() override;
	virtual $String* toString() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	void updateMenuIcon();
	void updateStyle(::javax::swing::JComponent* c);
	::javax::swing::JPopupMenu* systemPopupMenu = nullptr;
	::javax::swing::JButton* menuButton = nullptr;
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	int32_t titleSpacing = 0;
	int32_t buttonSpacing = 0;
	int32_t titleAlignment = 0;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthInternalFrameTitlePane_h_