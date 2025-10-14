#ifndef _javax_swing_TransferHandler_h_
#define _javax_swing_TransferHandler_h_
//$ class javax.swing.TransferHandler
//$ extends java.io.Serializable

#include <java/awt/dnd/DnDConstants.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("ACTION_COPY")
#undef ACTION_COPY
#pragma push_macro("ACTION_COPY_OR_MOVE")
#undef ACTION_COPY_OR_MOVE
#pragma push_macro("ACTION_LINK")
#undef ACTION_LINK
#pragma push_macro("ACTION_MOVE")
#undef ACTION_MOVE
#pragma push_macro("ACTION_NONE")
#undef ACTION_NONE
#pragma push_macro("COPY")
#undef COPY
#pragma push_macro("COPY_OR_MOVE")
#undef COPY_OR_MOVE
#pragma push_macro("LINK")
#undef LINK
#pragma push_macro("MOVE")
#undef MOVE
#pragma push_macro("NONE")
#undef NONE

namespace java {
	namespace awt {
		class Image;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace datatransfer {
			class Clipboard;
			class DataFlavor;
			class Transferable;
		}
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DropTargetListener;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class InputEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyDescriptor;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class Icon;
		class JComponent;
		class TransferHandler$SwingDragGestureRecognizer;
		class TransferHandler$TransferSupport;
	}
}

namespace javax {
	namespace swing {

class $import TransferHandler : public ::java::io::Serializable {
	$class(TransferHandler, 0, ::java::io::Serializable)
public:
	TransferHandler();
	void init$($String* property);
	void init$();
	virtual bool canImport(::javax::swing::TransferHandler$TransferSupport* support);
	virtual bool canImport(::javax::swing::JComponent* comp, $Array<::java::awt::datatransfer::DataFlavor>* transferFlavors);
	virtual ::java::awt::datatransfer::Transferable* createTransferable(::javax::swing::JComponent* c);
	virtual void exportAsDrag(::javax::swing::JComponent* comp, ::java::awt::event::InputEvent* e, int32_t action);
	virtual void exportDone(::javax::swing::JComponent* source, ::java::awt::datatransfer::Transferable* data, int32_t action);
	virtual void exportToClipboard(::javax::swing::JComponent* comp, ::java::awt::datatransfer::Clipboard* clip, int32_t action);
	static ::javax::swing::Action* getCopyAction();
	static ::javax::swing::Action* getCutAction();
	virtual ::java::awt::Image* getDragImage();
	virtual ::java::awt::Point* getDragImageOffset();
	static ::java::awt::dnd::DropTargetListener* getDropTargetListener();
	static ::javax::swing::Action* getPasteAction();
	::java::awt::datatransfer::DataFlavor* getPropertyDataFlavor($Class* k, $Array<::java::awt::datatransfer::DataFlavor>* flavors);
	::java::beans::PropertyDescriptor* getPropertyDescriptor(::javax::swing::JComponent* comp);
	virtual int32_t getSourceActions(::javax::swing::JComponent* c);
	virtual ::javax::swing::Icon* getVisualRepresentation(::java::awt::datatransfer::Transferable* t);
	virtual bool importData(::javax::swing::TransferHandler$TransferSupport* support);
	virtual bool importData(::javax::swing::JComponent* comp, ::java::awt::datatransfer::Transferable* t);
	virtual void setDragImage(::java::awt::Image* img);
	virtual void setDragImageOffset(::java::awt::Point* p);
	static const int32_t NONE = ::java::awt::dnd::DnDConstants::ACTION_NONE;
	static const int32_t COPY = ::java::awt::dnd::DnDConstants::ACTION_COPY;
	static const int32_t MOVE = ::java::awt::dnd::DnDConstants::ACTION_MOVE;
	static const int32_t COPY_OR_MOVE = ::java::awt::dnd::DnDConstants::ACTION_COPY_OR_MOVE;
	static const int32_t LINK = ::java::awt::dnd::DnDConstants::ACTION_LINK;
	::java::awt::Image* dragImage = nullptr;
	::java::awt::Point* dragImageOffset = nullptr;
	$String* propertyName = nullptr;
	static ::javax::swing::TransferHandler$SwingDragGestureRecognizer* recognizer;
	static ::javax::swing::Action* cutAction;
	static ::javax::swing::Action* copyAction;
	static ::javax::swing::Action* pasteAction;
};

	} // swing
} // javax

#pragma pop_macro("ACTION_COPY")
#pragma pop_macro("ACTION_COPY_OR_MOVE")
#pragma pop_macro("ACTION_LINK")
#pragma pop_macro("ACTION_MOVE")
#pragma pop_macro("ACTION_NONE")
#pragma pop_macro("COPY")
#pragma pop_macro("COPY_OR_MOVE")
#pragma pop_macro("LINK")
#pragma pop_macro("MOVE")
#pragma pop_macro("NONE")

#endif // _javax_swing_TransferHandler_h_