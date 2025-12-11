#ifndef _com_apple_laf_AquaFileChooserUI$MacListSelectionModel_h_
#define _com_apple_laf_AquaFileChooserUI$MacListSelectionModel_h_
//$ class com.apple.laf.AquaFileChooserUI$MacListSelectionModel
//$ extends javax.swing.DefaultListSelectionModel

#include <javax/swing/DefaultListSelectionModel.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
			class AquaFileSystemModel;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$MacListSelectionModel : public ::javax::swing::DefaultListSelectionModel {
	$class(AquaFileChooserUI$MacListSelectionModel, $NO_CLASS_INIT, ::javax::swing::DefaultListSelectionModel)
public:
	AquaFileChooserUI$MacListSelectionModel();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0, ::com::apple::laf::AquaFileSystemModel* model);
	virtual void addSelectionInterval(int32_t index0, int32_t index1) override;
	virtual bool isSelectableInListIndex(int32_t index);
	virtual void setAnchorSelectionIndex(int32_t anchorIndex) override;
	virtual void setLeadSelectionIndex(int32_t leadIndex) override;
	virtual void setSelectionInterval(int32_t index0, int32_t index1) override;
	virtual void verifySelectionInterval(int32_t index0, int32_t index1, bool isSetSelection);
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
	::com::apple::laf::AquaFileSystemModel* fModel = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$MacListSelectionModel_h_