#ifndef _com_sun_java_swing_plaf_motif_MotifFileChooserUI_h_
#define _com_sun_java_swing_plaf_motif_MotifFileChooserUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifFileChooserUI
//$ extends javax.swing.plaf.basic.BasicFileChooserUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>

#pragma push_macro("MAX_SIZE")
#undef MAX_SIZE
#pragma push_macro("MIN_HEIGHT")
#undef MIN_HEIGHT
#pragma push_macro("MIN_WIDTH")
#undef MIN_WIDTH
#pragma push_macro("PREF_ACC_SIZE")
#undef PREF_ACC_SIZE
#pragma push_macro("PREF_SIZE")
#undef PREF_SIZE
#pragma push_macro("WITH_ACCELERATOR_PREF_SIZE")
#undef WITH_ACCELERATOR_PREF_SIZE
#pragma push_macro("ZERO_ACC_SIZE")
#undef ZERO_ACC_SIZE

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifFileChooserUI$FilterComboBoxModel;
						class MotifFileChooserUI$FilterComboBoxRenderer;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
		class Insets;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
		class PropertyChangeListener;
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JComboBox;
		class JComponent;
		class JFileChooser;
		class JLabel;
		class JList;
		class JPanel;
		class JScrollPane;
		class JTextField;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifFileChooserUI : public ::javax::swing::plaf::basic::BasicFileChooserUI {
	$class(MotifFileChooserUI, 0, ::javax::swing::plaf::basic::BasicFileChooserUI)
public:
	MotifFileChooserUI();
	void init$(::javax::swing::JFileChooser* filechooser);
	virtual void align(::javax::swing::JComponent* c);
	virtual ::javax::swing::JScrollPane* createDirectoryList();
	virtual ::javax::swing::JScrollPane* createFilesList();
	virtual ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$FilterComboBoxModel* createFilterComboBoxModel();
	virtual ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$FilterComboBoxRenderer* createFilterComboBoxRenderer();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener(::javax::swing::JFileChooser* fc) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	void doControlButtonsChanged(::java::beans::PropertyChangeEvent* e);
	virtual void ensureFileIsVisible(::javax::swing::JFileChooser* fc, ::java::io::File* f) override;
	$String* fileNameString(::java::io::File* file);
	$String* fileNameString($Array<::java::io::File>* files);
	virtual ::javax::swing::JButton* getApproveButton(::javax::swing::JFileChooser* fc) override;
	virtual ::javax::swing::JPanel* getBottomPanel();
	virtual $String* getDirectoryName() override;
	virtual $String* getFileName() override;
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* x) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* x) override;
	::java::lang::Integer* getMnemonic($String* key, ::java::util::Locale* l);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installComponents(::javax::swing::JFileChooser* fc) override;
	virtual void installIcons(::javax::swing::JFileChooser* fc) override;
	virtual void installStrings(::javax::swing::JFileChooser* fc) override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	void populateFileNameLabel();
	virtual void rescanCurrentDirectory(::javax::swing::JFileChooser* fc) override;
	virtual void setDirectoryName($String* dirname) override;
	virtual void setFileName($String* filename) override;
	virtual void uninstallComponents(::javax::swing::JFileChooser* fc) override;
	virtual void uninstallIcons(::javax::swing::JFileChooser* fc) override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	::com::sun::java::swing::plaf::motif::MotifFileChooserUI$FilterComboBoxModel* filterComboBoxModel = nullptr;
	::javax::swing::JList* directoryList = nullptr;
	::javax::swing::JList* fileList = nullptr;
	::javax::swing::JTextField* pathField = nullptr;
	::javax::swing::JComboBox* filterComboBox = nullptr;
	::javax::swing::JTextField* filenameTextField = nullptr;
	static ::java::awt::Dimension* hstrut10;
	static ::java::awt::Dimension* vstrut10;
	static ::java::awt::Insets* insets;
	static ::java::awt::Dimension* prefListSize;
	static ::java::awt::Dimension* WITH_ACCELERATOR_PREF_SIZE;
	static ::java::awt::Dimension* PREF_SIZE;
	static const int32_t MIN_WIDTH = 200;
	static const int32_t MIN_HEIGHT = 300;
	static ::java::awt::Dimension* PREF_ACC_SIZE;
	static ::java::awt::Dimension* ZERO_ACC_SIZE;
	static ::java::awt::Dimension* MAX_SIZE;
	static ::java::awt::Insets* buttonMargin;
	::javax::swing::JPanel* bottomPanel = nullptr;
	::javax::swing::JButton* approveButton = nullptr;
	$String* enterFolderNameLabelText = nullptr;
	int32_t enterFolderNameLabelMnemonic = 0;
	$String* enterFileNameLabelText = nullptr;
	int32_t enterFileNameLabelMnemonic = 0;
	$String* filesLabelText = nullptr;
	int32_t filesLabelMnemonic = 0;
	$String* foldersLabelText = nullptr;
	int32_t foldersLabelMnemonic = 0;
	$String* pathLabelText = nullptr;
	int32_t pathLabelMnemonic = 0;
	$String* filterLabelText = nullptr;
	int32_t filterLabelMnemonic = 0;
	::javax::swing::JLabel* fileNameLabel = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("MAX_SIZE")
#pragma pop_macro("MIN_HEIGHT")
#pragma pop_macro("MIN_WIDTH")
#pragma pop_macro("PREF_ACC_SIZE")
#pragma pop_macro("PREF_SIZE")
#pragma pop_macro("WITH_ACCELERATOR_PREF_SIZE")
#pragma pop_macro("ZERO_ACC_SIZE")

#endif // _com_sun_java_swing_plaf_motif_MotifFileChooserUI_h_