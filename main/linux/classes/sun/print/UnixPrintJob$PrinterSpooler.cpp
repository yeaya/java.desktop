#include <sun/print/UnixPrintJob$PrinterSpooler.h>

#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/PrintWriter.h>
#include <java/io/Reader.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <javax/print/PrintException.h>
#include <javax/print/event/PrintJobEvent.h>
#include <sun/print/UnixPrintJob.h>
#include <jcpp.h>

#undef DATA_TRANSFER_COMPLETE
#undef JOB_FAILED
#undef NO_MORE_EVENTS

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
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrintException = ::javax::print::PrintException;
using $PrintJobEvent = ::javax::print::event::PrintJobEvent;
using $UnixPrintJob = ::sun::print::UnixPrintJob;

namespace sun {
	namespace print {

$FieldInfo _UnixPrintJob$PrinterSpooler_FieldInfo_[] = {
	{"this$0", "Lsun/print/UnixPrintJob;", nullptr, $FINAL | $SYNTHETIC, $field(UnixPrintJob$PrinterSpooler, this$0)},
	{"pex", "Ljavax/print/PrintException;", nullptr, 0, $field(UnixPrintJob$PrinterSpooler, pex)},
	{}
};

$MethodInfo _UnixPrintJob$PrinterSpooler_MethodInfo_[] = {
	{"<init>", "(Lsun/print/UnixPrintJob;)V", nullptr, $PRIVATE, $method(static_cast<void(UnixPrintJob$PrinterSpooler::*)($UnixPrintJob*)>(&UnixPrintJob$PrinterSpooler::init$))},
	{"handleProcessFailure", "(Ljava/lang/Process;[Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(UnixPrintJob$PrinterSpooler::*)($Process*,$StringArray*,int32_t)>(&UnixPrintJob$PrinterSpooler::handleProcessFailure)), "java.io.IOException"},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UnixPrintJob$PrinterSpooler_InnerClassesInfo_[] = {
	{"sun.print.UnixPrintJob$PrinterSpooler", "sun.print.UnixPrintJob", "PrinterSpooler", $PRIVATE},
	{}
};

$ClassInfo _UnixPrintJob$PrinterSpooler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.UnixPrintJob$PrinterSpooler",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_UnixPrintJob$PrinterSpooler_FieldInfo_,
	_UnixPrintJob$PrinterSpooler_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	nullptr,
	_UnixPrintJob$PrinterSpooler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.UnixPrintJob"
};

$Object* allocate$UnixPrintJob$PrinterSpooler($Class* clazz) {
	return $of($alloc(UnixPrintJob$PrinterSpooler));
}

void UnixPrintJob$PrinterSpooler::init$($UnixPrintJob* this$0) {
	$set(this, this$0, this$0);
}

void UnixPrintJob$PrinterSpooler::handleProcessFailure($Process* failedProcess, $StringArray* execCmd, int32_t result) {
	$useLocalCurrentObjectStackCache();
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
																		} catch ($Throwable& t$) {
																			try {
																				br->close();
																			} catch ($Throwable& x2) {
																				t$->addSuppressed(x2);
																			}
																			$throw(t$);
																		}
																	} catch ($Throwable& var$6) {
																		$assign(var$5, var$6);
																	} /*finally*/ {
																		br->close();
																	}
																	if (var$5 != nullptr) {
																		$throw(var$5);
																	}
																}
															} catch ($Throwable& t$) {
																try {
																	isr->close();
																} catch ($Throwable& x2) {
																	t$->addSuppressed(x2);
																}
																$throw(t$);
															}
														} catch ($Throwable& var$7) {
															$assign(var$4, var$7);
														} /*finally*/ {
															isr->close();
														}
														if (var$4 != nullptr) {
															$throw(var$4);
														}
													}
												} catch ($Throwable& t$) {
													if (is != nullptr) {
														try {
															is->close();
														} catch ($Throwable& x2) {
															t$->addSuppressed(x2);
														}
													}
													$throw(t$);
												}
											} catch ($Throwable& var$8) {
												$assign(var$3, var$8);
											} /*finally*/ {
												if (is != nullptr) {
													is->close();
												}
											}
											if (var$3 != nullptr) {
												$throw(var$3);
											}
										}
									} catch ($Throwable& var$9) {
										$assign(var$2, var$9);
									} /*finally*/ {
										pw->flush();
									}
									if (var$2 != nullptr) {
										$throw(var$2);
									}
								}
								$throwNew($IOException, $(sw->toString()));
							} catch ($Throwable& t$) {
								try {
									pw->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$10) {
							$assign(var$1, var$10);
						} /*finally*/ {
							pw->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					try {
						sw->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$11) {
				$assign(var$0, var$11);
			} /*finally*/ {
				sw->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$Object* UnixPrintJob$PrinterSpooler::run() {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->spoolFile == nullptr || !$nc(this->this$0->spoolFile)->exists()) {
		$set(this, pex, $new($PrintException, "No spool file"_s));
		this->this$0->notifyEvent($PrintJobEvent::JOB_FAILED);
		return $of(nullptr);
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($String, fileName, $nc(this->this$0->spoolFile)->getAbsolutePath());
				$var($StringArray, execCmd, this->this$0->printExecCmd(this->this$0->mDestination, this->this$0->mOptions, this->this$0->mNoJobSheet, this->this$0->jobName, this->this$0->copies, fileName));
				$var($Process, process, $nc($($Runtime::getRuntime()))->exec(execCmd));
				$nc(process)->waitFor();
				int32_t result = process->exitValue();
				if (0 != result) {
					handleProcessFailure(process, execCmd, result);
				}
				this->this$0->notifyEvent($PrintJobEvent::DATA_TRANSFER_COMPLETE);
			} catch ($IOException& ex) {
				this->this$0->notifyEvent($PrintJobEvent::JOB_FAILED);
				$set(this, pex, $new($PrintException, static_cast<$Exception*>(ex)));
			} catch ($InterruptedException& ie) {
				this->this$0->notifyEvent($PrintJobEvent::JOB_FAILED);
				$set(this, pex, $new($PrintException, static_cast<$Exception*>(ie)));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->this$0->spoolFile)->delete$();
			this->this$0->notifyEvent($PrintJobEvent::NO_MORE_EVENTS);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return $of(nullptr);
}

UnixPrintJob$PrinterSpooler::UnixPrintJob$PrinterSpooler() {
}

$Class* UnixPrintJob$PrinterSpooler::load$($String* name, bool initialize) {
	$loadClass(UnixPrintJob$PrinterSpooler, name, initialize, &_UnixPrintJob$PrinterSpooler_ClassInfo_, allocate$UnixPrintJob$PrinterSpooler);
	return class$;
}

$Class* UnixPrintJob$PrinterSpooler::class$ = nullptr;

	} // print
} // sun