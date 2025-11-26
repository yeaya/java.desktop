#ifndef _RepaintManagerFPUIScaleTest$TestListCellRenderer_h_
#define _RepaintManagerFPUIScaleTest$TestListCellRenderer_h_
//$ class RepaintManagerFPUIScaleTest$TestListCellRenderer
//$ extends javax.swing.DefaultListCellRenderer

#include <javax/swing/DefaultListCellRenderer.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}

class $export RepaintManagerFPUIScaleTest$TestListCellRenderer : public ::javax::swing::DefaultListCellRenderer {
	$class(RepaintManagerFPUIScaleTest$TestListCellRenderer, $NO_CLASS_INIT, ::javax::swing::DefaultListCellRenderer)
public:
	RepaintManagerFPUIScaleTest$TestListCellRenderer();
	using ::javax::swing::DefaultListCellRenderer::contains;
	using ::javax::swing::DefaultListCellRenderer::enable;
	using ::javax::swing::DefaultListCellRenderer::getBounds;
	using ::javax::swing::DefaultListCellRenderer::getSize;
	using ::javax::swing::DefaultListCellRenderer::getLocation;
	using ::javax::swing::DefaultListCellRenderer::add;
	using ::javax::swing::DefaultListCellRenderer::getMousePosition;
	void init$();
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) override;
	using ::javax::swing::DefaultListCellRenderer::repaint;
	using ::javax::swing::DefaultListCellRenderer::setUI;
	using ::javax::swing::DefaultListCellRenderer::requestFocus;
	using ::javax::swing::DefaultListCellRenderer::requestFocusInWindow;
	using ::javax::swing::DefaultListCellRenderer::remove;
	using ::javax::swing::DefaultListCellRenderer::list;
};

#endif // _RepaintManagerFPUIScaleTest$TestListCellRenderer_h_