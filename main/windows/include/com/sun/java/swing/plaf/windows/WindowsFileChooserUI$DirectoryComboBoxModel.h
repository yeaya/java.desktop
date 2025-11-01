#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$DirectoryComboBoxModel_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$DirectoryComboBoxModel_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxModel
//$ extends javax.swing.AbstractListModel
//$ implements javax.swing.ComboBoxModel

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
	namespace io {
		class File;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
	}
}
namespace javax {
	namespace swing {
		namespace filechooser {
			class FileSystemView;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsFileChooserUI$DirectoryComboBoxModel : public ::javax::swing::AbstractListModel, public ::javax::swing::ComboBoxModel {
	$class(WindowsFileChooserUI$DirectoryComboBoxModel, $NO_CLASS_INIT, ::javax::swing::AbstractListModel, ::javax::swing::ComboBoxModel)
public:
	WindowsFileChooserUI$DirectoryComboBoxModel();
	virtual void addListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0);
	void addItem(::java::io::File* directory);
	void calculateDepths();
	virtual int32_t getDepth(int32_t i);
	virtual $Object* getElementAt(int32_t index) override;
	virtual $Object* getSelectedItem() override;
	virtual int32_t getSize() override;
	virtual void removeListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual void setSelectedItem(Object$* selectedDirectory) override;
	virtual $String* toString() override;
	::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0 = nullptr;
	::java::util::Vector* directories = nullptr;
	$ints* depths = nullptr;
	::java::io::File* selectedDirectory = nullptr;
	::javax::swing::JFileChooser* chooser = nullptr;
	::javax::swing::filechooser::FileSystemView* fsv = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$DirectoryComboBoxModel_h_