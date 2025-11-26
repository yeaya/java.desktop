#ifndef _HeadlessJTree$1_h_
#define _HeadlessJTree$1_h_
//$ class HeadlessJTree$1
//$ extends javax.swing.tree.DefaultTreeCellRenderer

#include <javax/swing/tree/DefaultTreeCellRenderer.h>

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

class HeadlessJTree$1 : public ::javax::swing::tree::DefaultTreeCellRenderer {
	$class(HeadlessJTree$1, $NO_CLASS_INIT, ::javax::swing::tree::DefaultTreeCellRenderer)
public:
	HeadlessJTree$1();
	using ::javax::swing::tree::DefaultTreeCellRenderer::contains;
	using ::javax::swing::tree::DefaultTreeCellRenderer::enable;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getBounds;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getSize;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getLocation;
	using ::javax::swing::tree::DefaultTreeCellRenderer::add;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getMousePosition;
	void init$();
	virtual ::java::awt::Component* getTreeCellRendererComponent(::javax::swing::JTree* tree, Object$* value, bool selected, bool expanded, bool leaf, int32_t row, bool hasFocus) override;
	using ::javax::swing::tree::DefaultTreeCellRenderer::repaint;
	using ::javax::swing::tree::DefaultTreeCellRenderer::setUI;
	using ::javax::swing::tree::DefaultTreeCellRenderer::requestFocus;
	using ::javax::swing::tree::DefaultTreeCellRenderer::requestFocusInWindow;
	using ::javax::swing::tree::DefaultTreeCellRenderer::remove;
	using ::javax::swing::tree::DefaultTreeCellRenderer::list;
};

#endif // _HeadlessJTree$1_h_