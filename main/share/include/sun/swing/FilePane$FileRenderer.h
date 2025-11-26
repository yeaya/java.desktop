#ifndef _sun_swing_FilePane$FileRenderer_h_
#define _sun_swing_FilePane$FileRenderer_h_
//$ class sun.swing.FilePane$FileRenderer
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
namespace sun {
	namespace swing {
		class FilePane;
	}
}

namespace sun {
	namespace swing {

class $import FilePane$FileRenderer : public ::javax::swing::DefaultListCellRenderer {
	$class(FilePane$FileRenderer, $NO_CLASS_INIT, ::javax::swing::DefaultListCellRenderer)
public:
	FilePane$FileRenderer();
	using ::javax::swing::DefaultListCellRenderer::contains;
	using ::javax::swing::DefaultListCellRenderer::enable;
	using ::javax::swing::DefaultListCellRenderer::getBounds;
	using ::javax::swing::DefaultListCellRenderer::getSize;
	using ::javax::swing::DefaultListCellRenderer::getLocation;
	using ::javax::swing::DefaultListCellRenderer::add;
	using ::javax::swing::DefaultListCellRenderer::getMousePosition;
	void init$(::sun::swing::FilePane* this$0);
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) override;
	using ::javax::swing::DefaultListCellRenderer::repaint;
	using ::javax::swing::DefaultListCellRenderer::setUI;
	using ::javax::swing::DefaultListCellRenderer::requestFocus;
	using ::javax::swing::DefaultListCellRenderer::requestFocusInWindow;
	using ::javax::swing::DefaultListCellRenderer::remove;
	using ::javax::swing::DefaultListCellRenderer::list;
	::sun::swing::FilePane* this$0 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$FileRenderer_h_