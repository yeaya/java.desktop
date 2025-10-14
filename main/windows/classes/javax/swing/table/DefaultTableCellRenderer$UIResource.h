#ifndef _javax_swing_table_DefaultTableCellRenderer$UIResource_h_
#define _javax_swing_table_DefaultTableCellRenderer$UIResource_h_
//$ class javax.swing.table.DefaultTableCellRenderer$UIResource
//$ extends javax.swing.table.DefaultTableCellRenderer
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>

namespace javax {
	namespace swing {
		namespace table {

class $export DefaultTableCellRenderer$UIResource : public ::javax::swing::table::DefaultTableCellRenderer, public ::javax::swing::plaf::UIResource {
	$class(DefaultTableCellRenderer$UIResource, $NO_CLASS_INIT, ::javax::swing::table::DefaultTableCellRenderer, ::javax::swing::plaf::UIResource)
public:
	DefaultTableCellRenderer$UIResource();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	void init$();
	using ::javax::swing::table::DefaultTableCellRenderer::repaint;
	using ::javax::swing::table::DefaultTableCellRenderer::setUI;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocus;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocusInWindow;
	using ::javax::swing::table::DefaultTableCellRenderer::remove;
	using ::javax::swing::table::DefaultTableCellRenderer::list;
	virtual $String* toString() override;
};

		} // table
	} // swing
} // javax

#endif // _javax_swing_table_DefaultTableCellRenderer$UIResource_h_