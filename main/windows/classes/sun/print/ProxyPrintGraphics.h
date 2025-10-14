#ifndef _sun_print_ProxyPrintGraphics_h_
#define _sun_print_ProxyPrintGraphics_h_
//$ class sun.print.ProxyPrintGraphics
//$ extends sun.print.ProxyGraphics
//$ implements java.awt.PrintGraphics

#include <java/awt/PrintGraphics.h>
#include <sun/print/ProxyGraphics.h>

namespace java {
	namespace awt {
		class Graphics;
		class PrintJob;
	}
}

namespace sun {
	namespace print {

class ProxyPrintGraphics : public ::sun::print::ProxyGraphics, public ::java::awt::PrintGraphics {
	$class(ProxyPrintGraphics, $NO_CLASS_INIT, ::sun::print::ProxyGraphics, ::java::awt::PrintGraphics)
public:
	ProxyPrintGraphics();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Graphics* graphics, ::java::awt::PrintJob* thePrintJob);
	virtual ::java::awt::Graphics* create() override;
	virtual ::java::awt::Graphics* create(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void dispose() override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::PrintJob* getPrintJob() override;
	virtual $String* toString() override;
	::java::awt::PrintJob* printJob = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ProxyPrintGraphics_h_