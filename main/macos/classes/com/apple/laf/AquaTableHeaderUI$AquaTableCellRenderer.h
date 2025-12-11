#ifndef _com_apple_laf_AquaTableHeaderUI$AquaTableCellRenderer_h_
#define _com_apple_laf_AquaTableHeaderUI$AquaTableCellRenderer_h_
//$ class com.apple.laf.AquaTableHeaderUI$AquaTableCellRenderer
//$ extends javax.swing.table.DefaultTableCellRenderer
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTableHeaderUI;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTableHeaderUI$AquaTableCellRenderer : public ::javax::swing::table::DefaultTableCellRenderer, public ::javax::swing::plaf::UIResource {
	$class(AquaTableHeaderUI$AquaTableCellRenderer, $NO_CLASS_INIT, ::javax::swing::table::DefaultTableCellRenderer, ::javax::swing::plaf::UIResource)
public:
	AquaTableHeaderUI$AquaTableCellRenderer();
	using ::javax::swing::table::DefaultTableCellRenderer::firePropertyChange;
	using ::javax::swing::table::DefaultTableCellRenderer::contains;
	using ::javax::swing::table::DefaultTableCellRenderer::enable;
	using ::javax::swing::table::DefaultTableCellRenderer::getBounds;
	using ::javax::swing::table::DefaultTableCellRenderer::getSize;
	using ::javax::swing::table::DefaultTableCellRenderer::getLocation;
	using ::javax::swing::table::DefaultTableCellRenderer::add;
	using ::javax::swing::table::DefaultTableCellRenderer::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::apple::laf::AquaTableHeaderUI* this$0);
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* localTable, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) override;
	using ::javax::swing::table::DefaultTableCellRenderer::repaint;
	using ::javax::swing::table::DefaultTableCellRenderer::setUI;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocus;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocusInWindow;
	using ::javax::swing::table::DefaultTableCellRenderer::remove;
	using ::javax::swing::table::DefaultTableCellRenderer::list;
	virtual $String* toString() override;
	::com::apple::laf::AquaTableHeaderUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTableHeaderUI$AquaTableCellRenderer_h_