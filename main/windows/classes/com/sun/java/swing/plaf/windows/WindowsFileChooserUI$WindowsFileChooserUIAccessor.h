#ifndef _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$WindowsFileChooserUIAccessor_h_
#define _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$WindowsFileChooserUIAccessor_h_
//$ class com.sun.java.swing.plaf.windows.WindowsFileChooserUI$WindowsFileChooserUIAccessor
//$ extends sun.swing.FilePane$FileChooserUIAccessor

#include <sun/swing/FilePane$FileChooserUIAccessor.h>

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
	namespace awt {
		namespace event {
			class MouseListener;
		}
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class JFileChooser;
		class JList;
		class JPanel;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListSelectionListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicDirectoryModel;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsFileChooserUI$WindowsFileChooserUIAccessor : public ::sun::swing::FilePane$FileChooserUIAccessor {
	$class(WindowsFileChooserUI$WindowsFileChooserUIAccessor, $NO_CLASS_INIT, ::sun::swing::FilePane$FileChooserUIAccessor)
public:
	WindowsFileChooserUI$WindowsFileChooserUIAccessor();
	void init$(::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0);
	virtual ::javax::swing::JPanel* createDetailsView() override;
	virtual ::java::awt::event::MouseListener* createDoubleClickListener(::javax::swing::JList* list) override;
	virtual ::javax::swing::JPanel* createList() override;
	virtual ::javax::swing::event::ListSelectionListener* createListSelectionListener() override;
	virtual ::javax::swing::Action* getApproveSelectionAction() override;
	virtual ::javax::swing::Action* getChangeToParentDirectoryAction() override;
	virtual ::java::io::File* getDirectory() override;
	virtual ::javax::swing::JFileChooser* getFileChooser() override;
	virtual ::javax::swing::plaf::basic::BasicDirectoryModel* getModel() override;
	virtual ::javax::swing::Action* getNewFolderAction() override;
	virtual bool isDirectorySelected() override;
	::com::sun::java::swing::plaf::windows::WindowsFileChooserUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsFileChooserUI$WindowsFileChooserUIAccessor_h_