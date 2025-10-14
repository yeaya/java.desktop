#ifndef _javax_swing_plaf_synth_SynthTableHeaderUI_h_
#define _javax_swing_plaf_synth_SynthTableHeaderUI_h_
//$ class javax.swing.plaf.synth.SynthTableHeaderUI
//$ extends javax.swing.plaf.basic.BasicTableHeaderUI
//$ implements java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthContext;
				class SynthStyle;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class JTableHeader;
			class TableCellRenderer;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthTableHeaderUI : public ::javax::swing::plaf::basic::BasicTableHeaderUI, public ::java::beans::PropertyChangeListener, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthTableHeaderUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTableHeaderUI, ::java::beans::PropertyChangeListener, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthTableHeaderUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static int32_t access$000(::javax::swing::plaf::synth::SynthTableHeaderUI* x0);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* h);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	virtual void installDefaults() override;
	virtual void installListeners() override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual void rolloverColumnUpdated(int32_t oldColumn, int32_t newColumn) override;
	virtual $String* toString() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateStyle(::javax::swing::table::JTableHeader* c);
	::javax::swing::table::TableCellRenderer* prevRenderer = nullptr;
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTableHeaderUI_h_