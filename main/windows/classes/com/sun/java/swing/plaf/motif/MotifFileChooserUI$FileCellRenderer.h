#ifndef _com_sun_java_swing_plaf_motif_MotifFileChooserUI$FileCellRenderer_h_
#define _com_sun_java_swing_plaf_motif_MotifFileChooserUI$FileCellRenderer_h_
//$ class com.sun.java.swing.plaf.motif.MotifFileChooserUI$FileCellRenderer
//$ extends javax.swing.DefaultListCellRenderer

#include <javax/swing/DefaultListCellRenderer.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifFileChooserUI;
					}
				}
			}
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
		class JList;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifFileChooserUI$FileCellRenderer : public ::javax::swing::DefaultListCellRenderer {
	$class(MotifFileChooserUI$FileCellRenderer, $NO_CLASS_INIT, ::javax::swing::DefaultListCellRenderer)
public:
	MotifFileChooserUI$FileCellRenderer();
	using ::javax::swing::DefaultListCellRenderer::contains;
	using ::javax::swing::DefaultListCellRenderer::enable;
	using ::javax::swing::DefaultListCellRenderer::getBounds;
	using ::javax::swing::DefaultListCellRenderer::getSize;
	using ::javax::swing::DefaultListCellRenderer::getLocation;
	using ::javax::swing::DefaultListCellRenderer::add;
	using ::javax::swing::DefaultListCellRenderer::getMousePosition;
	void init$(::com::sun::java::swing::plaf::motif::MotifFileChooserUI* this$0);
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) override;
	using ::javax::swing::DefaultListCellRenderer::repaint;
	using ::javax::swing::DefaultListCellRenderer::setUI;
	using ::javax::swing::DefaultListCellRenderer::requestFocus;
	using ::javax::swing::DefaultListCellRenderer::requestFocusInWindow;
	using ::javax::swing::DefaultListCellRenderer::remove;
	using ::javax::swing::DefaultListCellRenderer::list;
	::com::sun::java::swing::plaf::motif::MotifFileChooserUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifFileChooserUI$FileCellRenderer_h_