\version "2.24.0"
% <- keyword.directive
%        ^ string.delimiter.left
%         ^ string
%               ^ string.delimiter.right

\language english
% <- function.builtin
%         ^ constant.builtin.language

# (define foo '())
% <- keyword.directive
% ^ punctuation.bracket
%  ^ keyword
%             ^ operator
%              ^ punctuation.bracket
%               ^ punctuation.bracket
%                ^ punctuation.bracket

# (define-markup-command (bar layout properties input-markup) (markup?)
; <- keyword.directive
; ^ punctuation.bracket
;  ^ function.builtin
;                        ^ punctuation.bracket
;                                                           ^ punctuation.bracket
;                                                             ^ punctuation.bracket
;                                                              ^ function.builtin
;                                                                     ^ punctuation.bracket

  ( interpret-markup layout properties #{ \markup #input-markup #}))
  % <- punctuation.bracket
  % ^ function.builtin
  %                                    ^ punctuation.bracket
  %                                       ^ keyword
  %                                               ^ keyword.directive
  %                                                             ^ punctuation.bracket
  %                                                               ^ punctuation.bracket
  %                                                                ^ punctuation.bracket

\score {
% <- keyword
%      ^ punctuation.bracket

  \new Staff="foo" {
  % <- keyword
  %    ^ type.builtin.context
  %         ^ operator
  %          ^ string.delimiter.left
  %           ^ string
  %              ^ string.delimiter.right
  %                ^ punctuation.bracket

    \clef mezzosoprano
    % <- function.builtin
    %     ^ constant.builtin.clef

    \key c \phrygian
    % <- function.builtin
    %      ^ constant.builtin.scale

    \repeat unfold 1 { }
    % <- function.builtin
    %       ^ constant.builtin.repeat_type
    %              ^ number
    %                ^ punctuation.bracket
    %                  ^ punctuation.bracket

    < \breve >>> q1*3/2\^
    % <- punctuation.bracket
    % ^ constant.builtin
    %        ^ invalid
    %          ^ punctuation.bracket
    %            ^ keyword
    %             ^ number
    %              ^ punctuation
    %               ^ number
    %                ^ number
    %                 ^ number
    %                  ^ function.builtin

    << { 1 \< } \\ { 2 \! } >>
    % <- punctuation.bracket
    %  ^ punctuation.bracket
    %    ^ number
    %      ^ variable.builtin
    %         ^ punctuation.bracket
    %           ^ punctuation.delimiter
    %              ^ punctuation.bracket
    %                ^ number
    %                  ^ variable.builtin
    %                     ^ punctuation.bracket
    %                       ^ punctuation.bracket

    # (define bar #{
    % <- keyword.directive
    % ^ punctuation.bracket
    %  ^ keyword
    %             ^ punctuation.bracket
    %              ^ punctuation.bracket
      \relative {
      % <- function.builtin
      %         ^ punctuation.bracket
        # (make-sequential-music
        ; <- keyword.directive
        ; ^ punctuation.bracket
        ;  ^ function.builtin
          ( map (lambda (%baz) #{ s1 #})
          ; <- punctuation.bracket
          ; ^ function.builtin
          ;     ^ punctuation.bracket
          ;      ^ keyword
          ;             ^ punctuation.bracket
          ;              ^ !
          ;                  ^ punctuation.bracket
          ;                    ^ punctuation.bracket
          ;                     ^ punctuation.bracket
          ;                        ^ number
          ;                          ^ punctuation.bracket
          ;                            ^ punctuation.bracket
               ( iota 1)))
               % <- punctuation.bracket
               % ^ function.builtin
               %      ^ number
               %       ^ punctuation.bracket
               %        ^ punctuation.bracket
               %         ^ punctuation.bracket

      }
      % <- punctuation.bracket
    #})
    % <- punctuation.bracket
    %^ punctuation.bracket
    % ^ punctuation.bracket

    \tweak when ##f
    % <- function.builtin
    %      ^ property.graphical_object
    %           ^ keyword.directive
    %            ^ boolean

    \override NoteHead.labels = ""
    % <- keyword
    %         ^ type.builtin.graphical_object
    %                 ^ punctuation
    %                  ^ property.graphical_object
    %                         ^ operator
    %                           ^ string.delimiter.left
    %                            ^ string.delimiter.right
  }
  % <- punctuation.bracket
}
% <- punctuation.bracket

\lyrics {
% <- keyword
%       ^ punctuation.bracket
  flag labels when used systems-per-page
  % <- !
  %    ^ !
  %           ^ !
  %                ^ !
  %                     ^ !
  % The assertion ! succeeds when no highlighting is applied.
}
% <- punctuation.bracket

\paper {
% <- keyword
%      ^ punctuation.bracket
  systems-per-page = 1
  % <- variable.builtin
  %                ^ operator
  %                  ^ number
}
% <- punctuation.bracket
