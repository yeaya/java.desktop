#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$FilterComboBoxModel_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$FilterComboBoxModel_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$FilterComboBoxModel
//$ extends javax.swing.AbstractListModel
//$ implements javax.swing.ComboBoxModel,java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/ComboBoxModel.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsFileChooserUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		namespace filechooser {
			class FileFilter;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsFileChooserUI$FilterComboBoxModel : public ::javax::swing::AbstractListModel, public ::javax::swing::ComboBoxModel, public ::java::beans::PropertyChangeListener {
	$class(WindowsFileChooserUI$FilterComboBoxModel, $NO_CLASS_INIT, ::javax::swing::AbstractListModel, ::javax::swing::ComboBoxModel, ::java::beans::PropertyChangeListener)
public:
	WindowsFileChooserUI$FilterComboBoxModel();
	virtual void addListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0);
	virtual $Object* getElementAt(int32_t index) override;
	virtual $Object* getSelectedItem() override;
	virtual int32_t getSize() override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void removeListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual void setSelectedItem(Object$* filter) override;
	virtual $String* toString() override;
	::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0 = nullptr;
	$Array<::javax::swing::filechooser::FileFilter>* filters = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$FilterComboBoxModel_h_