#ifndef _sun_print_PrintJobFlavorException_h_
#define _sun_print_PrintJobFlavorException_h_
//$ class sun.print.PrintJobFlavorException
//$ extends javax.print.PrintException
//$ implements javax.print.FlavorException

#include <java/lang/Array.h>
#include <javax/print/FlavorException.h>
#include <javax/print/PrintException.h>

namespace javax {
	namespace print {
		class DocFlavor;
	}
}

namespace sun {
	namespace print {

class PrintJobFlavorException : public ::javax::print::PrintException, public ::javax::print::FlavorException {
	$class(PrintJobFlavorException, $NO_CLASS_INIT, ::javax::print::PrintException, ::javax::print::FlavorException)
public:
	PrintJobFlavorException();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* s, ::javax::print::DocFlavor* f);
	virtual $Array<::javax::print::DocFlavor>* getUnsupportedFlavors() override;
	virtual $String* toString() override;
	::javax::print::DocFlavor* flavor = nullptr;
	PrintJobFlavorException(const PrintJobFlavorException& e);
	virtual void throw$() override;
	inline PrintJobFlavorException* operator ->() {
		return (PrintJobFlavorException*)throwing$;
	}
};

	} // print
} // sun

#endif // _sun_print_PrintJobFlavorException_h_