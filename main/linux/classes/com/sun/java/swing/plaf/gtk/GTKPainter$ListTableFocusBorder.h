#ifndef _com_sun_java_swing_plaf_gtk_GTKPainter$ListTableFocusBorder_h_
#define _com_sun_java_swing_plaf_gtk_GTKPainter$ListTableFocusBorder_h_
//$ class com.sun.java.swing.plaf.gtk.GTKPainter$ListTableFocusBorder
//$ extends javax.swing.border.AbstractBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthContext;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKPainter$ListTableFocusBorder : public ::javax::swing::border::AbstractBorder, public ::javax::swing::plaf::UIResource {
	$class(GTKPainter$ListTableFocusBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder, ::javax::swing::plaf::UIResource)
public:
	GTKPainter$ListTableFocusBorder();
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool selectedCell, bool focusedCell);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* i) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::java::awt::Component* c);
	static ::com::sun::java::swing::plaf::gtk::GTKPainter$ListTableFocusBorder* getNoFocusCellBorder();
	static ::com::sun::java::swing::plaf::gtk::GTKPainter$ListTableFocusBorder* getSelectedCellBorder();
	static ::com::sun::java::swing::plaf::gtk::GTKPainter$ListTableFocusBorder* getUnselectedCellBorder();
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual $String* toString() override;
	bool selectedCell = false;
	bool focusedCell = false;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKPainter$ListTableFocusBorder_h_