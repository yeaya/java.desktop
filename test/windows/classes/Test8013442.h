#ifndef _Test8013442_h_
#define _Test8013442_h_
//$ class Test8013442
//$ extends javax.swing.filechooser.FileFilter
//$ implements java.lang.Runnable,java.lang.Thread$UncaughtExceptionHandler

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <javax/swing/filechooser/FileFilter.h>

#pragma push_macro("LATCH")
#undef LATCH

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Thread;
		class Throwable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
		class UIManager$LookAndFeelInfo;
	}
}

class $export Test8013442 : public ::javax::swing::filechooser::FileFilter, public ::java::lang::Runnable, public ::java::lang::Thread$UncaughtExceptionHandler {
	$class(Test8013442, 0, ::javax::swing::filechooser::FileFilter, ::java::lang::Runnable, ::java::lang::Thread$UncaughtExceptionHandler)
public:
	Test8013442();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool accept(::java::io::File* file) override;
	virtual $String* getDescription() override;
	static void main($StringArray* args);
	virtual void run() override;
	virtual $String* toString() override;
	virtual void uncaughtException($Thread* thread, $Throwable* throwable) override;
	static ::java::util::concurrent::CountDownLatch* LATCH;
	int32_t index = 0;
	$Array<::javax::swing::UIManager$LookAndFeelInfo>* infos = nullptr;
	::javax::swing::JFileChooser* chooser = nullptr;
};

#pragma pop_macro("LATCH")

#endif // _Test8013442_h_