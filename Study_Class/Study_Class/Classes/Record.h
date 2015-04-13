/****************************************************************************
 * File name		: Record.h
 * Description		: Declare the class "Record".
 * Creator			: XU ZAN
 * Creation date	: Thur.		Nov. 27, 2014
 * Copyright(C)		2014	All rights reserved.
 *
 ****************************************************************************/


#ifndef RECORD_H
#define RECORD_H

	#include <string>

	#ifdef __cplusplus
		extern "C"
		{
	#endif
			/* Forward declaration of the Screen class
			 */
			class Record;
			
			/* The Screen class definition :
			 */
			class Record
			{
				typedef std::size_t size;
				
				Record(void);
				Record(size s);
				Record(std::string s);
				
				size byte_count;
				std::string name;
			public:
				size get_count(void) const;
				std::string get_name(void) const;
			};
	#ifdef __cplusplus
		}
	#endif

#endif	/*  RECORD_H  */
