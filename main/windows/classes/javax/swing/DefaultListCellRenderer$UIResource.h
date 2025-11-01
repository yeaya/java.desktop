#ifndef _javax_swing_DefaultListCellRenderer$UIResource_h_
#define _javax_swing_DefaultListCellRenderer$UIResource_h_
//$ class javax.swing.DefaultListCellRenderer$UIResource
//$ extends javax.swing.DefaultListCellRenderer
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {

class $export DefaultListCellRenderer$UIResource : public ::javax::swing::DefaultListCellRenderer, public ::javax::swing::plaf::UIResource {
	$class(DefaultListCellRenderer$UIResource, $NO_CLASS_INIT, ::javax::swing::DefaultListCellRenderer, ::javax::swing::plaf::UIResource)
public:
	DefaultListCellRenderer$UIResource();
	using ::javax::swing::DefaultListCellRenderer::contains;
	using ::javax::swing::DefaultListCellRenderer::enable;
	using ::javax::swing::DefaultListCellRenderer::getBounds;
	using ::javax::swing::DefaultListCellRenderer::getSize;
	using ::javax::swing::DefaultListCellRenderer::getLocation;
	using ::javax::swing::DefaultListCellRenderer::add;
	using ::javax::swing::DefaultListCellRenderer::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	using ::javax::swing::DefaultListCellRenderer::repaint;
	using ::javax::swing::DefaultListCellRenderer::setUI;
	using ::javax::swing::DefaultListCellRenderer::requestFocus;
	using ::javax::swing::DefaultListCellRenderer::requestFocusInWindow;
	using ::javax::swing::DefaultListCellRenderer::remove;
	using ::javax::swing::DefaultListCellRenderer::list;
	virtual $String* toString() override;
};

	} // swing
} // javax

#endif // _javax_swing_DefaultListCellRenderer$UIResource_h_