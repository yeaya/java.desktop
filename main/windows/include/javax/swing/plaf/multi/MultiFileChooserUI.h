#ifndef _javax_swing_plaf_multi_MultiFileChooserUI_h_
#define _javax_swing_plaf_multi_MultiFileChooserUI_h_
//$ class javax.swing.plaf.multi.MultiFileChooserUI
//$ extends javax.swing.plaf.FileChooserUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/FileChooserUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
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
	namespace accessibility {
		class Accessible;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JFileChooser;
	}
}
namespace javax {
	namespace swing {
		namespace filechooser {
			class FileFilter;
			class FileView;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

class $import MultiFileChooserUI : public ::javax::swing::plaf::FileChooserUI {
	$class(MultiFileChooserUI, $NO_CLASS_INIT, ::javax::swing::plaf::FileChooserUI)
public:
	MultiFileChooserUI();
	void init$();
	virtual bool contains(::javax::swing::JComponent* a, int32_t b, int32_t c) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* a);
	virtual void ensureFileIsVisible(::javax::swing::JFileChooser* a, ::java::io::File* b) override;
	virtual ::javax::swing::filechooser::FileFilter* getAcceptAllFileFilter(::javax::swing::JFileChooser* a) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(::javax::swing::JComponent* a, int32_t b) override;
	virtual int32_t getAccessibleChildrenCount(::javax::swing::JComponent* a) override;
	virtual $String* getApproveButtonText(::javax::swing::JFileChooser* a) override;
	virtual $String* getDialogTitle(::javax::swing::JFileChooser* a) override;
	virtual ::javax::swing::filechooser::FileView* getFileView(::javax::swing::JFileChooser* a) override;
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* a) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* a) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* a) override;
	virtual $Array<::javax::swing::plaf::ComponentUI>* getUIs();
	virtual void installUI(::javax::swing::JComponent* a) override;
	virtual void paint(::java::awt::Graphics* a, ::javax::swing::JComponent* b) override;
	virtual void rescanCurrentDirectory(::javax::swing::JFileChooser* a) override;
	virtual void uninstallUI(::javax::swing::JComponent* a) override;
	virtual void update(::java::awt::Graphics* a, ::javax::swing::JComponent* b) override;
	::java::util::Vector* uis = nullptr;
};

			} // multi
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_multi_MultiFileChooserUI_h_