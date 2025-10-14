#ifndef _JTreeFocusTest$FormRenderer_h_
#define _JTreeFocusTest$FormRenderer_h_
//$ class JTreeFocusTest$FormRenderer
//$ extends javax.swing.tree.DefaultTreeCellRenderer

#include <javax/swing/tree/DefaultTreeCellRenderer.h>

class JTreeFocusTest;
namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JTree;
	}
}

class $export JTreeFocusTest$FormRenderer : public ::javax::swing::tree::DefaultTreeCellRenderer {
	$class(JTreeFocusTest$FormRenderer, $NO_CLASS_INIT, ::javax::swing::tree::DefaultTreeCellRenderer)
public:
	JTreeFocusTest$FormRenderer();
	using ::javax::swing::tree::DefaultTreeCellRenderer::contains;
	using ::javax::swing::tree::DefaultTreeCellRenderer::enable;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getBounds;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getSize;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getLocation;
	using ::javax::swing::tree::DefaultTreeCellRenderer::add;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getMousePosition;
	void init$(::JTreeFocusTest* this$0);
	virtual ::java::awt::Component* getTreeCellRendererComponent(::javax::swing::JTree* tree, Object$* value, bool sel, bool expanded, bool leaf, int32_t row, bool hasFocus) override;
	using ::javax::swing::tree::DefaultTreeCellRenderer::repaint;
	using ::javax::swing::tree::DefaultTreeCellRenderer::setUI;
	using ::javax::swing::tree::DefaultTreeCellRenderer::requestFocus;
	using ::javax::swing::tree::DefaultTreeCellRenderer::requestFocusInWindow;
	using ::javax::swing::tree::DefaultTreeCellRenderer::remove;
	using ::javax::swing::tree::DefaultTreeCellRenderer::list;
	::JTreeFocusTest* this$0 = nullptr;
};

#endif // _JTreeFocusTest$FormRenderer_h_