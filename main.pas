program bydw;

var
  res, result: string;
  i, choice: Integer;
  menu: string;

procedure encode(res: string);
begin
  result := '';
  for i := 1 to length(res) do
  begin
    if (i mod 2 = 0) then
    begin
      result := result + Chr(((Ord(LowerCase(res[i])) - Ord('a') - i + 26) mod 26 + Ord('a')));
    end
    else
    begin
      result := result + Chr(((Ord(LowerCase(res[i])) - Ord('a') + i + 26) mod 26 + Ord('a')));
    end;
  end;
  writeln(result);
end;

procedure decode(res: string);
begin
  result := '';
  for i := 1 to length(res) do
  begin
    if (i mod 2 = 0) then
    begin
      result := result + Chr(((Ord(LowerCase(res[i])) - Ord('a') + i + 26) mod 26 + Ord('a')));
    end
    else
    begin
      result := result + Chr(((Ord(LowerCase(res[i])) - Ord('a') - i + 26) mod 26 + Ord('a')));
    end;
  end;
  writeln(result);
end;

procedure main();
begin
    menu := '1 -> Encode' + #10 + '2 -> Decode' + #10 + '3 -> Quit' + #10;
    writeln(menu);
    readln(choice);
    if choice = 1 then
    begin
        writeln('Phrase a encoder: ');
        readln(res);
        encode(res);
    end
    else if choice = 2 then
    begin
        writeln('Phrase a decoder: ');
        readln(res);
        decode(res);
    end
    else
    begin
        writeln('Quitting...');
    end;
end;

begin
    main();
end.
