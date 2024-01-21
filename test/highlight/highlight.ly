\version "2.24.0"
% <- processing
%        ^ string.delimiter.left
%         ^ string
%               ^ string.delimiter.right

\language english
% <- identifier.core.function
%         ^ identifier.core.constant.language

# (define foo '())
% <- processing
% ^ bracket
%  ^ keyword
%             ^ operator
%              ^ bracket
%               ^ bracket
%                ^ bracket

# (define-markup-command (bar layout properties input-markup) (markup?)
; <- processing
; ^ bracket
;  ^ identifier.core.function
;                        ^ bracket
;                                                           ^ bracket
;                                                             ^ bracket
;                                                              ^ identifier.core.function
;                                                                     ^ bracket

  ( interpret-markup layout properties #{ \markup #input-markup #}))
  % <- bracket
  % ^ identifier.core.function
  %                                    ^ bracket
  %                                       ^ keyword
  %                                               ^ processing
  %                                                             ^ bracket
  %                                                               ^ bracket
  %                                                                ^ bracket

\score {
% <- keyword
%      ^ bracket

  \new Staff="foo" {
  % <- keyword
  %    ^ identifier.core.type.context
  %         ^ operator
  %          ^ string.delimiter.left
  %           ^ string
  %              ^ string.delimiter.right
  %                ^ bracket

    < \breve >>> q*3/2\^
    % <- bracket
    % ^ value.number
    %        ^ invalid
    %          ^ bracket
    %            ^ keyword
    %             ^ punctuation
    %              ^ value.number
    %               ^ value.number
    %                ^ value.number
    %                 ^ identifier.core.function

    << { 1 \< } \\ { 2 \! } >>
    % <- bracket
    %  ^ bracket
    %    ^ value.number
    %      ^ identifier.core.global
    %         ^ bracket
    %           ^ bracket
    %              ^ bracket
    %                ^ value.number
    %                  ^ identifier.core.global
    %                     ^ bracket
    %                       ^ bracket
  }
}
