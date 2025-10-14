#include <sun/print/PSPrinterJob$PrinterSpooler.h>

#include <java/awt/print/PrinterException.h>
#include <java/awt/print/PrinterIOException.h>
#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/PrintWriter.h>
#include <java/io/Reader.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/print/PSPrinterJob.h>
#include <jcpp.h>

using $PrinterException = ::java::awt::print::PrinterException;
using $PrinterIOException = ::java::awt::print::PrinterIOException;
using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintWriter = ::java::io::PrintWriter;
using $Reader = ::java::io::Reader;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PSPrinterJob = ::sun::print::PSPrinterJob;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;

namespace sun {
	namespace print {

$FieldInfo _PSPrinterJob$PrinterSpooler_FieldInfo_[] = {
	{"this$0", "Lsun/print/PSPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(PSPrinterJob$PrinterSpooler, this$0)},
	{"pex", "Ljava/awt/print/PrinterException;", nullptr, 0, $field(PSPrinterJob$PrinterSpooler, pex)},
	{}
};

$MethodInfo _PSPrinterJob$PrinterSpooler_MethodInfo_[] = {
	{"<init>", "(Lsun/print/PSPrinterJob;)V", nullptr, $PRIVATE, $method(static_cast<void(PSPrinterJob$PrinterSpooler::*)($PSPrinterJob*)>(&PSPrinterJob$PrinterSpooler::init$))},
	{"handleProcessFailure", "(Ljava/lang/Process;[Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(PSPrinterJob$PrinterSpooler::*)($Process*,$StringArray*,int32_t)>(&PSPrinterJob$PrinterSpooler::handleProcessFailure)), "java.io.IOException"},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PSPrinterJob$PrinterSpooler_InnerClassesInfo_[] = {
	{"sun.print.PSPrinterJob$PrinterSpooler", "sun.print.PSPrinterJob", "PrinterSpooler", $PRIVATE},
	{}
};

$ClassInfo _PSPrinterJob$PrinterSpooler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.PSPrinterJob$PrinterSpooler",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_PSPrinterJob$PrinterSpooler_FieldInfo_,
	_PSPrinterJob$PrinterSpooler_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	nullptr,
	_PSPrinterJob$PrinterSpooler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.PSPrinterJob"
};

$Object* allocate$PSPrinterJob$PrinterSpooler($Class* clazz) {
	return $of($alloc(PSPrinterJob$PrinterSpooler));
}

void PSPrinterJob$PrinterSpooler::init$($PSPrinterJob* this$0) {
	$set(this, this$0, this$0);
}

void PSPrinterJob$PrinterSpooler::handleProcessFailure($Process* failedProcess, $StringArray* execCmd, int32_t result) {
	{
		$var($StringWriter, sw, $new($StringWriter));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($PrintWriter, pw, $new($PrintWriter, static_cast<$Writer*>(sw)));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$nc($(pw->append(static_cast<$CharSequence*>("error="_s))))->append($(static_cast<$CharSequence*>($Integer::toString(result))));
								pw->append(static_cast<$CharSequence*>(" running:"_s));
								{
									$var($StringArray, arr$, execCmd);
									int32_t len$ = $nc(arr$)->length;
									int32_t i$ = 0;
									for (; i$ < len$; ++i$) {
										$var($String, arg, arr$->get(i$));
										{
											$nc($($nc($(pw->append(static_cast<$CharSequence*>(" \'"_s))))->append(static_cast<$CharSequence*>(arg))))->append(static_cast<$CharSequence*>("\'"_s));
										}
									}
								}
								{
									$var($Throwable, var$2, nullptr);
									try {
										$var($InputStream, is, $nc(failedProcess)->getErrorStream());
										{
											$var($Throwable, var$3, nullptr);
											try {
												try {
													$var($InputStreamReader, isr, $new($InputStreamReader, is));
													{
														$var($Throwable, var$4, nullptr);
														try {
															try {
																$var($BufferedReader, br, $new($BufferedReader, isr));
																{
																	$var($Throwable, var$5, nullptr);
																	try {
																		try {
																			while (br->ready()) {
																				pw->println();
																				$nc($(pw->append(static_cast<$CharSequence*>("\t\t"_s))))->append($(static_cast<$CharSequence*>(br->readLine())));
																			}
																		} catch ($Throwable&) {
																			$var($Throwable, t$, $catch());
																			try {
																				br->close();
																			} catch ($Throwable&) {
																				$var($Throwable, x2, $catch());
																				t$->addSuppressed(x2);
																			}
																			$throw(t$);
																		}
																	} catch ($Throwable&) {
																		$assign(var$5, $catch());
																	} /*finally*/ {
																		br->close();
																	}
																	if (var$5 != nullptr) {
																		$throw(var$5);
																	}
																}
															} catch ($Throwable&) {
																$var($Throwable, t$, $catch());
																try {
																	isr->close();
																} catch ($Throwable&) {
																	$var($Throwable, x2, $catch());
																	t$->addSuppressed(x2);
																}
																$throw(t$);
															}
														} catch ($Throwable&) {
															$assign(var$4, $catch());
														} /*finally*/ {
															isr->close();
														}
														if (var$4 != nullptr) {
															$throw(var$4);
														}
													}
												} catch ($Throwable&) {
													$var($Throwable, t$, $catch());
													if (is != nullptr) {
														try {
															is->close();
														} catch ($Throwable&) {
															$var($Throwable, x2, $catch());
															t$->addSuppressed(x2);
														}
													}
													$throw(t$);
												}
											} catch ($Throwable&) {
												$assign(var$3, $catch());
											} /*finally*/ {
												if (is != nullptr) {
													is->close();
												}
											}
											if (var$3 != nullptr) {
												$throw(var$3);
											}
										}
									} catch ($Throwable&) {
										$assign(var$2, $catch());
									} /*finally*/ {
										pw->flush();
									}
									if (var$2 != nullptr) {
										$throw(var$2);
									}
								}
								$throwNew($IOException, $(sw->toString()));
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									pw->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$1, $catch());
						} /*finally*/ {
							pw->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						sw->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				sw->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$Object* PSPrinterJob$PrinterSpooler::run() {
	if (this->this$0->spoolFile == nullptr || !$nc(this->this$0->spoolFile)->exists()) {
		$set(this, pex, $new($PrinterException, "No spool file"_s));
		return $of(nullptr);
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($String, fileName, $nc(this->this$0->spoolFile)->getAbsolutePath());
				$var($StringArray, execCmd, this->this$0->printExecCmd(this->this$0->mDestination, this->this$0->mOptions, this->this$0->mNoJobSheet, $(this->this$0->getJobNameInt()), 1, fileName));
				$var($Process, process, $nc($($Runtime::getRuntime()))->exec(execCmd));
				$nc(process)->waitFor();
				int32_t result = process->exitValue();
				if (0 != result) {
					handleProcessFailure(process, execCmd, result);
				}
			} catch ($IOException&) {
				$var($IOException, ex, $catch());
				$set(this, pex, $new($PrinterIOException, ex));
			} catch ($InterruptedException&) {
				$var($InterruptedException, ie, $catch());
				$set(this, pex, $new($PrinterException, $(ie->toString())));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->this$0->spoolFile)->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return $of(nullptr);
}

PSPrinterJob$PrinterSpooler::PSPrinterJob$PrinterSpooler() {
}

$Class* PSPrinterJob$PrinterSpooler::load$($String* name, bool initialize) {
	$loadClass(PSPrinterJob$PrinterSpooler, name, initialize, &_PSPrinterJob$PrinterSpooler_ClassInfo_, allocate$PSPrinterJob$PrinterSpooler);
	return class$;
}

$Class* PSPrinterJob$PrinterSpooler::class$ = nullptr;

	} // print
} // sun