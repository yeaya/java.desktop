#ifndef _javax_swing_ProgressMonitor_h_
#define _javax_swing_ProgressMonitor_h_
//$ class javax.swing.ProgressMonitor
//$ extends javax.accessibility.Accessible

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class JDialog;
		class JLabel;
		class JOptionPane;
		class JProgressBar;
	}
}

namespace javax {
	namespace swing {

class $export ProgressMonitor : public ::javax::accessibility::Accessible {
	$class(ProgressMonitor, $NO_CLASS_INIT, ::javax::accessibility::Accessible)
public:
	ProgressMonitor();
	void init$(::java::awt::Component* parentComponent, Object$* message, $String* note, int32_t min, int32_t max);
	void init$(::java::awt::Component* parentComponent, Object$* message, $String* note, int32_t min, int32_t max, ::javax::swing::ProgressMonitor* group);
	virtual void close();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual int32_t getMaximum();
	virtual int32_t getMillisToDecideToPopup();
	virtual int32_t getMillisToPopup();
	virtual int32_t getMinimum();
	virtual $String* getNote();
	virtual bool isCanceled();
	virtual void setMaximum(int32_t m);
	virtual void setMillisToDecideToPopup(int32_t millisToDecideToPopup);
	virtual void setMillisToPopup(int32_t millisToPopup);
	virtual void setMinimum(int32_t m);
	virtual void setNote($String* note);
	virtual void setProgress(int32_t nv);
	::javax::swing::ProgressMonitor* root = nullptr;
	::javax::swing::JDialog* dialog = nullptr;
	::javax::swing::JOptionPane* pane = nullptr;
	::javax::swing::JProgressBar* myBar = nullptr;
	::javax::swing::JLabel* noteLabel = nullptr;
	::java::awt::Component* parentComponent = nullptr;
	$String* note = nullptr;
	$ObjectArray* cancelOption = nullptr;
	$Object* message = nullptr;
	int64_t T0 = 0;
	int32_t millisToDecideToPopup = 0;
	int32_t millisToPopup = 0;
	int32_t min = 0;
	int32_t max = 0;
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
	::javax::accessibility::AccessibleContext* accessibleJOptionPane = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ProgressMonitor_h_