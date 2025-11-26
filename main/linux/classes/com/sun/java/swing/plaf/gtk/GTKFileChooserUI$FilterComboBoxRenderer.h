#ifndef _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$FilterComboBoxRenderer_h_
#define _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$FilterComboBoxRenderer_h_
//$ class com.sun.java.swing.plaf.gtk.GTKFileChooserUI$FilterComboBoxRenderer
//$ extends javax.swing.DefaultListCellRenderer

#include <javax/swing/DefaultListCellRenderer.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKFileChooserUI;
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
					namespace gtk {

class GTKFileChooserUI$FilterComboBoxRenderer : public ::javax::swing::DefaultListCellRenderer {
	$class(GTKFileChooserUI$FilterComboBoxRenderer, $NO_CLASS_INIT, ::javax::swing::DefaultListCellRenderer)
public:
	GTKFileChooserUI$FilterComboBoxRenderer();
	using ::javax::swing::DefaultListCellRenderer::contains;
	using ::javax::swing::DefaultListCellRenderer::enable;
	using ::javax::swing::DefaultListCellRenderer::getBounds;
	using ::javax::swing::DefaultListCellRenderer::getSize;
	using ::javax::swing::DefaultListCellRenderer::getLocation;
	using ::javax::swing::DefaultListCellRenderer::add;
	using ::javax::swing::DefaultListCellRenderer::getMousePosition;
	void init$(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0);
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) override;
	virtual $String* getName() override;
	using ::javax::swing::DefaultListCellRenderer::repaint;
	using ::javax::swing::DefaultListCellRenderer::setUI;
	using ::javax::swing::DefaultListCellRenderer::requestFocus;
	using ::javax::swing::DefaultListCellRenderer::requestFocusInWindow;
	using ::javax::swing::DefaultListCellRenderer::remove;
	using ::javax::swing::DefaultListCellRenderer::list;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0 = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$FilterComboBoxRenderer_h_