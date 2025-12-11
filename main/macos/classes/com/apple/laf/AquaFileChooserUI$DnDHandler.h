#ifndef _com_apple_laf_AquaFileChooserUI$DnDHandler_h_
#define _com_apple_laf_AquaFileChooserUI$DnDHandler_h_
//$ class com.apple.laf.AquaFileChooserUI$DnDHandler
//$ extends java.awt.dnd.DropTargetAdapter

#include <java/awt/dnd/DropTargetAdapter.h>
#include <java/lang/Array.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
		}
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DropTargetDragEvent;
			class DropTargetDropEvent;
		}
	}
}
namespace java {
	namespace io {
		class File;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$DnDHandler : public ::java::awt::dnd::DropTargetAdapter {
	$class(AquaFileChooserUI$DnDHandler, $NO_CLASS_INIT, ::java::awt::dnd::DropTargetAdapter)
public:
	AquaFileChooserUI$DnDHandler();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void dragEnter(::java::awt::dnd::DropTargetDragEvent* dtde) override;
	virtual void dragOver(::java::awt::dnd::DropTargetDragEvent* dtde) override;
	virtual void drop(::java::awt::dnd::DropTargetDropEvent* dtde) override;
	virtual void dropActionChanged(::java::awt::dnd::DropTargetDragEvent* dtde) override;
	virtual void dropFiles($Array<::java::io::File>* files);
	virtual void handleFileDropEvent(::java::awt::dnd::DropTargetDropEvent* dtde);
	virtual void handleStringDropEvent(::java::awt::dnd::DropTargetDropEvent* dtde);
	virtual void tryToAcceptDrag(::java::awt::dnd::DropTargetDragEvent* dtde);
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$DnDHandler_h_