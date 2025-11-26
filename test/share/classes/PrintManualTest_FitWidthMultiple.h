#ifndef _PrintManualTest_FitWidthMultiple_h_
#define _PrintManualTest_FitWidthMultiple_h_
//$ class PrintManualTest_FitWidthMultiple
//$ extends javax.swing.JTable
//$ implements java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JTable.h>

namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JScrollPane;
	}
}

class $export PrintManualTest_FitWidthMultiple : public ::javax::swing::JTable, public ::java::lang::Runnable {
	$class(PrintManualTest_FitWidthMultiple, 0, ::javax::swing::JTable, ::java::lang::Runnable)
public:
	PrintManualTest_FitWidthMultiple();
	using ::javax::swing::JTable::getToolTipText;
	using ::javax::swing::JTable::contains;
	using ::javax::swing::JTable::enable;
	using ::javax::swing::JTable::getBounds;
	using ::javax::swing::JTable::getSize;
	using ::javax::swing::JTable::getLocation;
	using ::javax::swing::JTable::firePropertyChange;
	using ::javax::swing::JTable::add;
	using ::javax::swing::JTable::getMousePosition;
	using ::javax::swing::JTable::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::CountDownLatch* latch);
	virtual ::javax::swing::JScrollPane* addInfo($String* info);
	void createUIandTest();
	virtual void dispose();
	static void main($StringArray* argv);
	using ::javax::swing::JTable::print;
	using ::javax::swing::JTable::requestFocus;
	using ::javax::swing::JTable::requestFocusInWindow;
	using ::javax::swing::JTable::repaint;
	using ::javax::swing::JTable::remove;
	virtual void run() override;
	using ::javax::swing::JTable::setUI;
	virtual $String* toString() override;
	static bool testPassed;
	static ::javax::swing::JFrame* fr;
	static ::javax::swing::JFrame* instructFrame;
	::java::util::concurrent::CountDownLatch* latch = nullptr;
};

#endif // _PrintManualTest_FitWidthMultiple_h_