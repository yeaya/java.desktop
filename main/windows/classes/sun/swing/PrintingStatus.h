#ifndef _sun_swing_PrintingStatus_h_
#define _sun_swing_PrintingStatus_h_
//$ class sun.swing.PrintingStatus
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class WindowAdapter;
		}
	}
}
namespace java {
	namespace awt {
		namespace print {
			class Printable;
			class PrinterJob;
		}
	}
}
namespace java {
	namespace text {
		class MessageFormat;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}
namespace javax {
	namespace swing {
		class Action;
		class JButton;
		class JDialog;
		class JLabel;
	}
}

namespace sun {
	namespace swing {

class $export PrintingStatus : public ::java::lang::Object {
	$class(PrintingStatus, 0, ::java::lang::Object)
public:
	PrintingStatus();
	void init$(::java::awt::Component* parent, ::java::awt::print::PrinterJob* job);
	virtual ::java::awt::print::Printable* createNotificationPrintable(::java::awt::print::Printable* printable);
	static ::sun::swing::PrintingStatus* createPrintingStatus(::java::awt::Component* parent, ::java::awt::print::PrinterJob* job);
	virtual void dispose();
	void disposeOnEDT();
	static int32_t getInt(Object$* key, int32_t defaultValue);
	void init();
	virtual bool isAborted();
	virtual void showModal(bool isModal);
	void showModalOnEDT(bool isModal);
	static bool $assertionsDisabled;
	::java::awt::print::PrinterJob* job = nullptr;
	::java::awt::Component* parent = nullptr;
	::javax::swing::JDialog* abortDialog = nullptr;
	::javax::swing::JButton* abortButton = nullptr;
	::javax::swing::JLabel* statusLabel = nullptr;
	::java::text::MessageFormat* statusFormat = nullptr;
	::java::util::concurrent::atomic::AtomicBoolean* isAborted$ = nullptr;
	::javax::swing::Action* abortAction = nullptr;
	::java::awt::event::WindowAdapter* closeListener = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_PrintingStatus_h_