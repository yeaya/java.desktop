#ifndef _javax_swing_plaf_synth_SynthTableUI_h_
#define _javax_swing_plaf_synth_SynthTableUI_h_
//$ class javax.swing.plaf.synth.SynthTableUI
//$ extends javax.swing.plaf.basic.BasicTableUI
//$ implements javax.swing.plaf.synth.SynthUI,java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/plaf/basic/BasicTableUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Rectangle;
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
		class JTable;
		class JTable$DropLocation;
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
			class TableCellRenderer;
			class TableColumn;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export SynthTableUI : public ::javax::swing::plaf::basic::BasicTableUI, public ::javax::swing::plaf::synth::SynthUI, public ::java::beans::PropertyChangeListener {
	$class(SynthTableUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTableUI, ::javax::swing::plaf::synth::SynthUI, ::java::beans::PropertyChangeListener)
public:
	SynthTableUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	::java::awt::Rectangle* extendRect(::java::awt::Rectangle* rect, bool horizontal);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	::java::awt::Rectangle* getHDropLineRect(::javax::swing::JTable$DropLocation* loc);
	::java::awt::Rectangle* getVDropLineRect(::javax::swing::JTable$DropLocation* loc);
	virtual void installDefaults() override;
	virtual void installListeners() override;
	::javax::swing::table::TableCellRenderer* installRendererIfPossible($Class* objectClass, ::javax::swing::table::TableCellRenderer* renderer);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	void paintCell(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::java::awt::Rectangle* cellRect, int32_t row, int32_t column);
	void paintCells(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t rMin, int32_t rMax, int32_t cMin, int32_t cMax);
	void paintDraggedArea(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t rMin, int32_t rMax, ::javax::swing::table::TableColumn* draggedColumn, int32_t distance);
	void paintDropLines(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	void paintGrid(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t rMin, int32_t rMax, int32_t cMin, int32_t cMax);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* event) override;
	virtual $String* toString() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateStyle(::javax::swing::JTable* c);
	int32_t viewIndexForColumn(::javax::swing::table::TableColumn* aColumn);
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	bool useTableColors = false;
	bool useUIBorder = false;
	::java::awt::Color* alternateColor = nullptr;
	::javax::swing::table::TableCellRenderer* dateRenderer = nullptr;
	::javax::swing::table::TableCellRenderer* numberRenderer = nullptr;
	::javax::swing::table::TableCellRenderer* doubleRender = nullptr;
	::javax::swing::table::TableCellRenderer* floatRenderer = nullptr;
	::javax::swing::table::TableCellRenderer* iconRenderer = nullptr;
	::javax::swing::table::TableCellRenderer* imageIconRenderer = nullptr;
	::javax::swing::table::TableCellRenderer* booleanRenderer = nullptr;
	::javax::swing::table::TableCellRenderer* objectRenderer = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTableUI_h_