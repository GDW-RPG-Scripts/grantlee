/*
  This file is part of the Grantlee template system.

  Copyright (c) 2009 Stephen Kelly <steveire@gmail.com>

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License version 3 only, as published by the Free Software Foundation.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License version 3 for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef STRINGFILTERS_H
#define STRINGFILTERS_H

#include "filter.h"

using namespace Grantlee;

class GRANTLEE_EXPORT AddSlashesFilter : public Filter
{
public:
  AddSlashesFilter();

  virtual bool isSafe() const {
    return true;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = QString(), bool autoescape = false ) const;
};

class GRANTLEE_EXPORT CapFirstFilter : public Filter
{
public:
  CapFirstFilter();

  virtual bool isSafe() const {
    return true;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = QString(), bool autoescape = false ) const;
};

class GRANTLEE_EXPORT EscapeJsFilter : public Filter
{
public:
  EscapeJsFilter();

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = QString(), bool autoescape = false ) const;
};

class GRANTLEE_EXPORT FixAmpersandsFilter : public Filter
{
public:
  FixAmpersandsFilter();

  virtual bool isSafe() const {
    return true;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = QString(), bool autoescape = false ) const;
};


class GRANTLEE_EXPORT CutFilter : public Filter
{
public:
  CutFilter();

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = QString(), bool autoescape = false ) const;
};

class GRANTLEE_EXPORT SafeFilter : public Filter
{
public:
  SafeFilter();

  bool isSafe() const {
    return true;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = Grantlee::SafeString(), bool autoescape = false ) const;
};

class GRANTLEE_EXPORT LineNumbersFilter : public Filter
{
public:
  LineNumbersFilter();

  bool isSafe() const {
    return true;
  }

  bool needsAutoescape() const {
    return true;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = QString(), bool autoescape = false ) const;
};

class LowerFilter : public Filter
{
public:
  LowerFilter();

  bool isSafe() const {
    return true;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = Grantlee::SafeString(), bool autoescape = false ) const;
};

// class MakeListFilter : public Filter
// {//
// public:
//   MakeListFilter();
//
//   bool isSafe() {
//     return false;
//   }
//
//   Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = Grantlee::SafeString(), bool autoescape = false ) const;
//
// };

class StringFormatFilter : public Filter
{
public:
  StringFormatFilter();

  bool isSafe() const {
    return true;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = Grantlee::SafeString(), bool autoescape = false ) const;
};

class TitleFilter : public Filter
{
public:
  TitleFilter();

  bool isSafe() const {
    return true;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = Grantlee::SafeString(), bool autoescape = false ) const;
};

class GRANTLEE_EXPORT TruncateWordsFilter : public Filter
{
public:
  TruncateWordsFilter();

  bool isSafe() const {
    return true;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = QString(), bool autoescape = false ) const;
};

class GRANTLEE_EXPORT UpperFilter : public Filter
{
public:
  UpperFilter();

  // &amp; may be safe, but it will be changed to &AMP; which is not safe.
  bool isSafe() const {
    return false;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = Grantlee::SafeString(), bool autoescape = false ) const;
};

class GRANTLEE_EXPORT WordCountFilter : public Filter
{
public:
  WordCountFilter();

  bool isSafe() const {
    return true;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = Grantlee::SafeString(), bool autoescape = false ) const;
};

class GRANTLEE_EXPORT LJustFilter : public Filter
{
public:
  LJustFilter();

  bool isSafe() const {
    return true;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = Grantlee::SafeString(), bool autoescape = false ) const;
};

class GRANTLEE_EXPORT RJustFilter : public Filter
{
public:
  RJustFilter();

  bool isSafe() const {
    return true;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = Grantlee::SafeString(), bool autoescape = false ) const;
};

class GRANTLEE_EXPORT CenterFilter : public Filter
{
public:
  CenterFilter();

  bool isSafe() const {
    return true;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = Grantlee::SafeString(), bool autoescape = false ) const;
};

class GRANTLEE_EXPORT EscapeFilter : public Filter
{
public:
  EscapeFilter();

  bool isSafe() const {
    return true;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = Grantlee::SafeString(), bool autoescape = false ) const;
};

class GRANTLEE_EXPORT ForceEscapeFilter : public Filter
{
public:
  ForceEscapeFilter();

  bool isSafe() const {
    return true;
  }

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = Grantlee::SafeString(), bool autoescape = false ) const;
};

class GRANTLEE_EXPORT RemoveTagsFilter : public Filter
{
public:
  RemoveTagsFilter();

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = QString(), bool autoescape = false ) const;
};

class GRANTLEE_EXPORT StripTagsFilter : public Filter
{
public:
  StripTagsFilter();

  Grantlee::SafeString doFilter( const QVariant &input, const Grantlee::SafeString &argument = QString(), bool autoescape = false ) const;
};


#endif