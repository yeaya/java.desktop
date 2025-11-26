#ifndef _Test6943780_h_
#define _Test6943780_h_
//$ class Test6943780
//$ extends java.lang.Runnable
//$ implements java.lang.Thread$UncaughtExceptionHandler

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>

namespace java {
	namespace lang {
		class Thread;
		class Throwable;
	}
}

class $export Test6943780 : public ::java::lang::Runnable, public ::java::lang::Thread$UncaughtExceptionHandler {
	$class(Test6943780, $NO_CLASS_INIT, ::java::lang::Runnable, ::java::lang::Thread$UncaughtExceptionHandler)
public:
	Test6943780();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	virtual $String* toString() override;
	virtual void uncaughtException($Thread* thread, $Throwable* throwable) override;
};

#endif // _Test6943780_h_